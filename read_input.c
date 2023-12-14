#include "shell.h"

/**
 *read_input - read command
 *Return: void
 */

char *read_input(void)
{
	/*Read User Input*/
	char *buff = NULL;
	size_t read_size, buff_size = 0;

	buff_size = getline(&buff, &read_size, stdin);
	/*Checks if getline encountered an error (buff_size == -1) or if */
	/*the user entered "exit" to terminate the shell. If true*/
	/*it frees the allocated memory for buff and breaks out of the loop */
	if ((ssize_t) buff_size == -1 || _strcmp("exit\n", buff) == 0)
	{
		free(buff);
		return (NULL);
	}

	buff[buff_size - 1] = '\0';
	return (buff);
}
