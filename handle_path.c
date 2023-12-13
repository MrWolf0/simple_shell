#include "shell.h"
char *_path(char *command)
{
     char *path =getenv("PATH");
/*string containing the delimiter ":" it will be used to tokanize the PATH*/
     char *deli = ":";
/* a pointer that will be used to store each directory path obtained by tokenizing */
     char *dir;
/*a pointer that will be used to store the concatenated path of the */
     char *concat;
/*an instance of system struct that is defined to store */
/*information about files such as id device time of last modification*/
/* time of last status change */
    struct stat info;
/* in case the stat return 0 it successes otherwise -1*/
/* This checks if the given command already exists in the current directory */
/* the stat function is to take path as parameter and fill into buffer */
/* in our case it will be info our buffer contain info about the path */
/* in case the return 0 it will take a copy of the path without */
/* modify the original data like lock technique which used in kernal programming*/
/* when attempt to access user mode memory */
    if (stat(command, &info) == 0) {

        return (_strdup(command));
    }
/* This is a loop that iterates through each directory in the PATH it uses strtok to */
/*tokenize the PATH variable using the ":" delimiter for each directory it constructs the */
/*full path by concatenating the directory "/" and the command it then checks if the file */
/*exists using stat if the file is found the full path is duplicated using strdup and returned.*/
    while ((dir = strtok(path, deli)) != NULL)
      {
	concat = _strcat(dir, "/");
	concat = _strcat(concat, command);

        if (stat(concat, &info) == 0) {
            return (_strdup(concat));
        }
    }

    return (NULL);
}
