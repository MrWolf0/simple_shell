#include "shell.h"
void execute_command(char *args[]) {
    pid_t pid = fork();

    if (pid == -1) {
        perror("not executed ");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) {
        execute_command_helper(args);
    }
    else
      {
        waitpid(pid, NULL, 0);

    }
}
