#include <stdio.h>

/**
 * main - prints argument passed to it;
 * @argc: size of argv array
 * @argv: value passed by cmd
 * Return: returns 1 Always
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
