#include "shell.h"

/**
 *readCommad - a function to read  user input
 *Return: always must be 0 in case you are using int if you using void
 *
 *no need to return keyword
 *
 *write one character to the buffer
 *
 *and using 1 as  file descriptor of  standard output
 */
void readCommad(void)
{
	char buffer[BUFFERSIZE];
	/*the best choice for streaming such as */
	/*read from stdin or write to sdout is using */
	/*ssize_t because it is a signed integer to both */
	/*negative and positive values mean that we can */
	/*check return value from a specific fun like return */
	/*value from writing to a file if the function fail */
	/*to write the content to file it return -1 */
	/*which size_t can't represent */
	ssize_t readBytes;

	while (1)
	{
		/*read from the stdin device storing reading content in buffer */
		readBytes = read(STDIN_FILENO, buffer, sizeof(buffer) - 1);
		/*checking if the reading content failure or successfully by checking */
		/*value of ssize_t */
		if (readBytes == -1)
		{
			perror("There is an error in reading");
		}

		if (readBytes == 0)
		{
			write(STDOUT_FILENO, "\n", 1); /*Print a new line before exiting*/
			exit(EXIT_SUCCESS); /*Exit the program on EOF (Ctrl+D)*/
		}

		buffer[readBytes] = '\0';
		if (system(buffer) == -1)
		{
			perror("Command execution error");
		}

		/*Calculate the length of buffer to write to stdout */
		write(STDOUT_FILENO, "\n", 1);
		handleUserCommand(buffer);
		prompt();
	}
}
