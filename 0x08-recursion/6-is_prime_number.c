#include "main.h"

/**
 * is_prime_number -checke
 * @n: somtx
 * Return: retuznsb
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - sometxt
 * @n: sometxt
 * @resp: sometoo
 * Return: returns int
 */

int check_prime(int n, int resp)
{
	if (n >= resp && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
