/*
 * shell.h
 *
 *  Created on: Nov 28, 2023
 *      Author: nasser
 */

#ifndef SHELL_H_
#define SHELL_H_
#define BUFFERSIZE 256
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
void prompt();
void readCommad();
int gettingStrlen (char *s);
void handleUserCommand(char *command);
int path_handling(char *command_name, char **args);
char *my_strdup(const char *source);
char *my_strcpy(char *dest, char *src);
void execute_command(char *args[]);
void execute_command_helper(char *args[]);
void input_processing();
#endif /* SHELL_H_ */
