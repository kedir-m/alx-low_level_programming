#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name of person
 * @f: call back function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
