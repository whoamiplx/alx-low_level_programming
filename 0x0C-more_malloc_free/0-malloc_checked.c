#include "main.h"
/**
 * malloc_checked - allocates a memory using malloc
 * @b: bytes to be allocated
 * return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = mallloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
