
#include "shell.h"
#include <unistd.h>
/**
 * prompt - a function to print symbol #
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 */
void prompt(void)
{
char pound = '#';
write(STDOUT_FILENO, &pound, 1);
readCommad();
}
