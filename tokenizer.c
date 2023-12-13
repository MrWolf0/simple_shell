#include "shell.h"
char **tokanizer(char *str, char *deliamter)
{
  /*store result of strtok*/
	char *result;
/* is an array of char pointers used to store each token return from strtok*/
	char **split;
	int i = 0;
/*token generated*/
	result = strtok(str, deliamter);
/* allocate memory for a block of arrays each array size is 100 */
	split = (char **)calloc(100, sizeof(char *));
/* if an error free the memory */
	if (!split)
	{
		free(split);
		return (NULL);
	}
/*storing tokens into split*/
	while (result)
	{
	    split[i] = result;
		result = strtok(NULL, deliamter);
		i++;
	}
	return (split);
}
