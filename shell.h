#ifndef SHELL_H_
#define SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *str1, char *str2);
char *_strcpy(char *dest, char *src);
char **tokanizer(char *str, char *deliamter);
char *_strdup( char *source);
char *_path( char *command);
int execution(char **args);
void print_env(void);
void print_prompt(void);
char* read_input(void);
int is_line_empty(char *line);
void handle_special_commands(char *line, int *exit_status);
extern char **environ;
void looping(void);
#endif /* SHELL_H_ */
