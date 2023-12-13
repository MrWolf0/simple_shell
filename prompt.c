
#include "shell.h"
#include <unistd.h>

void prompt() {
    char pound = '#';
    write(STDOUT_FILENO,&pound,1);
    readCommad();
}
