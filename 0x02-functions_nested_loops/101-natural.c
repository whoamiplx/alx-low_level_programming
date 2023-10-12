/**
 * File: 101-natural.c
 * Auth: Amao Oluwanifesimi
 */
#include <stdio.h>
/**
 * main - list all natural numbers below 1024 (excluded)
 * that are multiples of 3 and 5
 *
 * return: always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 10; i < 1024; i++)
	{
		if ((i % 3) == 0 ||(i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
