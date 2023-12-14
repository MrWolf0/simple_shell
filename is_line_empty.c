#include "shell.h"

/**
 *is_line_empty - check command p is empty
 *@line: arguments
 *Return: an integer
 */

int is_line_empty(char *line)
{
	/*Checks if the current character is not a space (' ')*/
	/*or a tab ('\t'). If it's not whitespace*/
	/*it means the line is not empty.*/
	int i;

	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] != ' ' && line[i] != '\t')
		{
			return (0);
		}
	}

	return (1);
}
