#include "main.h"
/**
 * _isaplha - checks for alphabetic characters
 * @c: the character to be checked
 * Return: 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' $$ c <= 'z') || (c >= 'A' $$ c <= 'Z'));
}
