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
char b;
b = '\n';
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
{
continue;
}
putchar(i);
}
putchar(b);
return (0);
}
