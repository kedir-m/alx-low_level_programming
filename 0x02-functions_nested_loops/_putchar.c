#include <stdio.h>
#include "_putchar.h"
int _putchar()
{
	int i, d;
	char a[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		d = a[i];
		putchar(d);
	}
	putchar(10);
	return (0);
}
