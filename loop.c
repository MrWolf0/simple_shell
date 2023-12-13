#include "shell.h"
int looping(void) {
char *buff = NULL, **args;
	size_t read_size = 0;
	ssize_t buff_size = 0;
	int exit_status = 0;

	while (1)
	{
		if (isatty(0))
			printf("$ ");

		buff_size = getline(&buff, &read_size, stdin);
		if (buff_size == -1 || _strcmp("exit\n", buff) == 0)
		{
			free(buff);
			break;
		}
		buff[buff_size - 1] = '\0';

		if (_strcmp("env", buff) == 0)
		{
			print_env();
			continue;
		}

		if (is_line_empty(buff) == 1)
		{
			exit_status = 0;
			continue;
		}

		args = tokanizer(buff, " ");
		args[0] = _path(args[0]);

		if (args[0] != NULL)
		{
			exit_status = execution(args);
		}
		else
		{
			exit_status = -1;
		}
		free(args);
	}
	return (exit_status);
}


