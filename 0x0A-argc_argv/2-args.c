#include <stdio.h>

/**
 * main - prints argument passed to it;
 * @argc: size of argv array
 * @argv: value passed by cmd
 * Return: returns 1 Always
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
