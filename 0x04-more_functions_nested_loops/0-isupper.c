#include "main.h"
/**
 * _isupper - prog checks for uppercase letters
 * @c: variable text
 *
 * return: 1, if c is uppercase, otherwise 0. 
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
