#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints num
 * @argc: pa parame
 * @argv: para
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0, coin = 0, usedcoin = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0 && coin <= 4)
	{
		if (i >= coins[coin])
		{
			i -= coins[coin];
			usedcoin++;
		}
		else
		{
			coin++;
		}
	}
	printf("%i\n", usedcoin);
	return (0);
}
