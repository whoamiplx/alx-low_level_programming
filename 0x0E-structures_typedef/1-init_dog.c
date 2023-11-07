#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the new dog struct whose variable is to be initialized
 * @d: pointer to the struct of the new dog
 * @name: name of the new dog
 * @age: age to the new dog
 * @owner: owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
