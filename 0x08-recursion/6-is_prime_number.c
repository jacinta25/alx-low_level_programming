#include "main.h"
/**
 * is_prime_number - checks a prime number
 *
 * @n: then number to be checked
 *
 * Return: 1 for prime number, otherwise 0
 */
int check_prime(int n, int i);
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
/**
 * check_prime - help function to recursively check if its prime
 * @n: th number to check
 * @i: the divisor
 *
 * return: 1 if prime otherwise 0
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	else if (i < n)
		return (check_prime(n, i + 1));
	return (1);
}


