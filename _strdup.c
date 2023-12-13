#include "shell.h"
char *_strdup(char *source)
{
   /*check if the source str == NULL */
   size_t length ;
   char *destination;
    if (source == NULL) {
        return (NULL);
    }

    /* here we define an integer to hold the length */
    /*of coming string +1 to null terminator*/
     length = _strlen(source) + 1;

    /* Allocate memory for the new string*/
     destination = (char *)malloc(length);

    /* Check if memory allocation was successful*/
    if (destination == NULL) {
        perror("Memory allocation failed\n");
        return (NULL);
    }

    /* Copy the content of the source string to the new memory*/
    _strcpy(destination, source);

    return (destination);
}
