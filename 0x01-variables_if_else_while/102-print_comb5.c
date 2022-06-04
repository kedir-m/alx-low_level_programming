#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints some number
 *
 * Return: 0 (success) Always
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(32);
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i == 98 && j == 99)
continue;
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
