#include "shell.h"
void print_prompt(void)
{
/*the isatty function returns 1 if the file*/
/*descriptor is associated with*/
/*a terminal and 0 otherwise */
    if (isatty(0)) {
        printf("$ ");
    }
}
