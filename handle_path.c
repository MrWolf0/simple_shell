#include "shell.h"
/**
 * _path - handle command path, child process
 * @command: arguments
 * Return:  command handled
 */
char *_path(char *command)
{
	char *path = getenv("PATH");
	char *deli = ":", *concat, *path_copy;
	char **path_split;
	int i = 0, path_len = 0;
	struct stat info;

	if (stat(command, &info) == 0)
	{
		return (command);
	}
	path_copy = malloc(_strlen(path) + 1);
	path_copy = _strcpy(path_copy, path);
	path_split = tokanizer(path_copy, deli);
	while (path_split[i])
	{
		path_len = _strlen(path_split[i]);
		if (path_split[i][path_len - 1] != '/')
		{
			concat = _strcat(path_split[i], "/");
		}
		concat = _strcat(path_split[i], command);
		if (stat(concat, &info) == 0)
		{
			break;
		}
		i++;
	}
	free(path_copy);
	if (!path_split[i])
	{
		free(path_split);
		return (NULL);
	}
	free(path_split);
	return (concat);
	return (NULL);
}
