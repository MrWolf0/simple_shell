#include "shell.h"
/**
 * _strcpy -copies the string pointed to by src to the buffer
 * pointed to by dest.
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *Return: Always 0.
 */
char *my_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
dest[index] = '\0';
return (dest);
}
