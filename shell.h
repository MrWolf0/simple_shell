#ifndef SHELL_H_
#define SHELL_H_
#define BUFFERSIZE 256
#include <unistd.h>
#include <string.h>
#include <stdio.h>
void prompt(void);
void readCommad(void);
int gettingStrlen(char *s);
void handleUserCommand(char *command);
#endif /* SHELL_H_ */
