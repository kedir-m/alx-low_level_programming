#include <stdio.h>

/**
 * main - prints argument passed to it;
 * @argc: size of argv array
 * @argv: value passed by cmd
 * Return: returns 0 Always
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
