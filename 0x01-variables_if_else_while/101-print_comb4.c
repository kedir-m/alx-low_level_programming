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
int k;
for (i = 48; i <= 55; i++)
{
for (j = 49; j <= 56; j++)
{
for (k = 50; k <= 57; k++)
{
if (i < j && i < k && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if ((i < 55) || (j < 56) || (k < 57))
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);
return (0);
}
