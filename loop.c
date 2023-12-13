#include "shell.h"
void looping(void) {
    char *buff;
    int exit_status = 0;

    while (1) {
        print_prompt();
        buff = read_input();

        if (buff == NULL) {
            break;
        }

        handle_special_commands(buff, &exit_status);

        if (exit_status) {
            /*tokenization and execution*/
            char **args = tokanizer(buff, " ");
            args[0] = _path(args[0]);

            if (args[0] != NULL) {
                exit_status = execution(args);
            } else {
                perror("Error");
            }

            free(args);
        }

        free(buff);
    }
}
