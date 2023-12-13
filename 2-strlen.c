#include "shell.h"
/**
 * _strlen -calculate length of a given string
 *@s:  is a pointer point to the address of current index
 *Return: Always 0.
 */
int _strlen(char *s)
{
int counter = 0;
while (s[counter] != '\0')
{
counter++;
}
return (counter);
}
