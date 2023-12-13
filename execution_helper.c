#include "shell.h"
void execute_command_helper(char *args[])
{

    if (execvp(args[0], args) == -1) {
        perror("Command execution error");
        exit(EXIT_FAILURE);
    }
}
