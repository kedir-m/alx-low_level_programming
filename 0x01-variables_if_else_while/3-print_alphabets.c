#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (success) Always
 */
int main(void)
{
char i;
char j;
char b;
b = '\n';
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar(b);
return (0);
}
