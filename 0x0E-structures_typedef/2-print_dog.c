#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the struct declared for the dog d
 *
 * @d: the dog of struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d) .name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d) .owner);
	}
}
