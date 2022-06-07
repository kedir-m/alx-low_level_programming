#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks alpha char
 * @c: the char to be checked
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
