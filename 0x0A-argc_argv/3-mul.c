#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate mul
 * @argc: param
 * @argv: some
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int mul, i;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	return (0);
}
