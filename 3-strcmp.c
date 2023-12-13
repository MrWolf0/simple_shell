#include "shell.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @str1: A pointer to the first string to be compared.
 * @str2: A pointer to the second string to be compared.
 *
* Return: the how many differences of two strings
 */
int _strcmp(char *str1, char *str2)
{
/* loop checking if there are same characters in the 2 strings*/
/*actually we must check at least one of two strings */
/*to avoid segmant fault error*/
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
