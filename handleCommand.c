#include "shell.h"
/**
 * handleUserCommand - a function to handle user input
 *
 *@command : is the input command
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 */
void handleUserCommand(char *command)
{
/* Parse the command and arguments*/
char *token;
 /* Assuming a maximum of BUFFERSIZE/2 arguments*/
char *args[BUFFERSIZE / 2];
int i = 0;
/*Tokenize by space, tab, or newline*/
token = strtok(command, " \t\n");
while (token != NULL)
{
args[i++] = token;
token = strtok(NULL, " \t\n");
}
 /* Null-terminate the array of arguments*/
args[i] = NULL;
/* Execute the command with arguments*/
if (execvp(args[0], args) == -1)
{
perror("Command execution error");
}
}
