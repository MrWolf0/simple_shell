#include "shell.h"

/**
 *handle_special_commands - handle special command
 *@line: arguments
 *@exit_status: status
 *Return: void
 */
void handle_special_commands(char *line, int *exit_status)
{
	/*environment command If the user entered "env," */
	/*it calls the print_env function*/
	/*and continues to the next iteration of the loop.*/
	if (_strcmp("env", line) == 0)
	{
		print_env();
	}
	else if (is_line_empty(line))
	{
		*exit_status = 0;
	}
}
