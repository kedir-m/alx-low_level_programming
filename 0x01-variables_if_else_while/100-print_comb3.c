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
for (i = 48; i <= 56; i++)
{
for (j = 49; j <= 57; j++)
{
if (i < j)
{
putchar(i);
putchar(j);
if ((i < 56) || (j < 57))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
