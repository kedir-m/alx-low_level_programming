#include "main.h"
/**
 * get_endianness -checks for endiannes
 * Return: returns 1 or 0
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	if (*y + 48 == '1')
		return (1);
	return (0);
}
