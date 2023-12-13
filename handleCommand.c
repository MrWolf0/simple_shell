#include "shell.h"
void handleUserCommand(char *command) {
    /* Parse the command and arguments*/
    char *token;
    char *args[BUFFERSIZE / 2];  /* Assuming a maximum of BUFFERSIZE/2 arguments*/
    int i = 0;

    token = strtok(command, " \t\n");  /*Tokenize by space, tab, or newline*/
    while (token != NULL) {
        args[i++] = token;
        token = strtok(NULL, " \t\n");
    }
    args[i] = '\0';  /* Null-terminate the array of arguments*/

    /* Execute the command with arguments*/
    execute_command(args);
}
