#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints member of dog d
 * @d: dog structure data
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age == 0)
		printf("age: (nil)\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	if (d == NULL)
		return;
}
