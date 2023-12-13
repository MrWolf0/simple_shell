#include "shell.h"
char *my_strdup(const char *source) {
   /*check if the source str == NULL */
    if (source == NULL) {
        return NULL;
    }

    /* here we define an integer to hold the length */
    /*of coming string +1 to null terminator*/
    size_t length = gettingStrlen(source) + 1;

    /* Allocate memory for the new string*/
    char *destination = (char *)malloc(length);

    /* Check if memory allocation was successful*/
    if (destination == NULL) {
        perror("Memory allocation failed\n");
        return NULL;
    }

    /* Copy the content of the source string to the new memory*/
    my_strcpy(destination, source);

    return destination;
}
