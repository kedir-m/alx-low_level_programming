#include <stdio.h>

/**
 * print_school - prints "Holberton"
 *
 * Return: nothing.
 */
void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	printf("printing str %s\n", str);
	printf("printing *str %c\n", *str);
	printf("printing str[0] %c\n", str[0]);
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
	print_school();
	return (0);
}
