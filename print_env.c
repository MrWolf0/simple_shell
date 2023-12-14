#include "shell.h"

/**
 *print_env - print command path, child process
 *Return: void
 */
void print_env(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
