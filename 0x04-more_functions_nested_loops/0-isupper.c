#include "main.h"
/**
 * _isupper - prog checks for uppercase letters
 * @c: variable text
 *
 * return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
