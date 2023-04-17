#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Entry point
 * @d: passing structure at the function
 * @name: store a strig for main
 * @age: store a number for main
 * @owner: store a strig for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d!=NULL)
	{
		d->name=name;
		d->age=age;
		d->owner=owner;
	}
}
