#include "main.h"
/**
 * _strspn - gets the length pf a prefix substring.
 * @s: string where substring will lock
 * @accept: substring of accepted chars
 * return: length of occurence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
