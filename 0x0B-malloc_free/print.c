#include <stdio.h>
#include <stdlib.h>

void print_int_array(int *a, int size)
{
	int i = 0;

	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	}
}


int main(int argc, char *argv[])
{
	int *a;
	int asize, i;

	if (argc < 2)
	{
		printf("Please at least enter one number\n");
		printf("Usage: %s Number [Number]\n", argv[0]);
	}
	asize = argc - 1;
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(argv[i + 1]);
		i++;
	}

	print_int_array(a, asize);
	return 0;
}
