#include "shell.h"

/**
 * execute - execute command path, child process
 * @args: arguments
 * Return: exit status
 */

int execution(char **args)
{
  /*external variable environ, which is an array of*/
  /*here a new process is created using the fork system call */
	int id = fork(), status;
/*If the process is the child process execute the command */
	if (id == 0)
	{
/*the execve function replaces the current process's image */
 /* with a new one specified by the given command and arguments.*/
		if (execve(args[0], args, environ) == -1)
			perror("Error");
	}
/*if the process is the parent process it waits for the child process */
/*to complete using the wait system call the status of the child */
/*process is stored in the status variable the WIFEXITED macro checks */
/*if the child process terminated normally if true it extracts the exit status*/
/*using WEXITSTATUS and assigns it to the status variable */
	else
	{
/*waits for the child process*/
		wait(&status);
/*process is stored in the status variable the WIFEXITED macro checks*/
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}
	return (status);
}
