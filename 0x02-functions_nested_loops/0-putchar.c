#include <stdio.h>
#include "main.h"
/**
 * main - calls funtion _putchar
 *
 * Return: 0 success always
 */
int main(void)
{
	int i, d;
	char a[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		d = a[i];
		_putchar(d);
	}
	putchar(10);
	return (0);
}
