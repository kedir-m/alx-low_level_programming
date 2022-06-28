#include "main.h"
#include <stdlib.h>
/**
 * _strdup - prints dup of string str
 * @str: char parameter
 * @Return: returns char
 */

char *_strdup(char *str)
{
	int i, j;
	if (str == NULL)
	{
		return (NULL);
	}
	char *new_str;
	for (i = 0; i < str[i]; i++)
		;

	new_str = malloc(sizeof(char) * i);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}
