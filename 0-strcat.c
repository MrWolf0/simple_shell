#include "shell.h"
#include <stddef.h>
/**
 *_strcat - Concatenates 2 string as src string to dest string
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to dest.
 *
 *Return: A pointer to the destination string dest.
 */
char *_strcat(char *dest, char *src)
{
	/*here we need a temp pointer */
	/*note that *p here point to the srart of memory location of dest*/
	char *p = dest;
	/*checking if both pointer have point to null pointer to avoid app crashing */
	if ((src == NULL) && (dest == NULL))
	{
		return (NULL);
	}
	/*loop itrate until reach '\0' checking *p and make sure that*/
	/*the original pointer isn't null */
	/*the purpose of that loop is make p reach to the last */
	/*memory location  that dest point to suppose dest start from 1000*/
	/*to 1005 here p hold the location of 1005*/
	while (p && *p)
	{
		++p;
	}

/*copy content of *src to *p starting from 1005 */
/*it just change the course that p point on*/
/* to point the location that src point to*/
/*and incremet poth by 1 until src finish*/
	while ((*p++ = *src++))
	;
/*return the dest with src concatenating together*/
	return (dest);
}
