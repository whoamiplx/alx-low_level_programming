#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * return: void
 */
void print_more_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(C == '2'|| c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
