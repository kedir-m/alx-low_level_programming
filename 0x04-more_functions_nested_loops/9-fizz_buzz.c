#include <stdio.h>
/**
 * main - prints fizzbuzz
 *
 * Return: returns o
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("FIZZ ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("BUZZ ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FIZZBUZZ ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
