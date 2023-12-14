#include "shell.h"
char *_path(char *command)
{
     char *path =getenv("PATH");
/*string containing the delimiter ":" it will be used to tokanize the PATH*/
     char *deli = ":";
/* a pointer that will be used to store each directory path obtained by tokenizing */
/*a pointer that will be used to store the concatenated path of the */
     char *concat;
     char *path_copy;
     char **path_split;
     int i = 0, path_len = 0;
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

        return (command);
    }
/* This is a loop that iterates through each directory in the PATH it uses strtok to */
/*tokenize the PATH variable using the ":" delimiter for each directory it constructs the */
/*full path by concatenating the directory "/" and the command it then checks if the file */
/*exists using stat if the file is found the full path is duplicated using strdup and returned.*/

/*allocate memory for the copy or the original path */
   	 path_copy = malloc(_strlen(path) + 1);
 /*copy the the copy version of PATH to the allocated memory*/
          path_copy = _strcpy(path_copy, path);
/* create tokens using this function that use strtok*/
	path_split = tokanizer(path_copy, deli);
/*iterate through the path */
while (path_split[i])
	{
/* calculate the length of the path */
		path_len = _strlen(path_split[i]);
/*If the last character of the directory path is not / concatenate / */
		if (path_split[i][path_len - 1] != '/')
		{
			concat = _strcat(path_split[i], "/");
		}
/*concatenate the directory path and the command*/
		concat = _strcat(path_split[i], command);
/*check if the file exists using stat*/
		if (stat(concat, &info) == 0)
		{
			break;
		}
		i++;
	}
/*free the memory allocated for the copy of the PATH*/
	free(path_copy);
/*If no valid path is found, free the memory and return NULL*/
	if (!path_split[i])
	{
		free(path_split);
		return (NULL);
	}

	free(path_split);
	return (concat);
    return (NULL);
}
