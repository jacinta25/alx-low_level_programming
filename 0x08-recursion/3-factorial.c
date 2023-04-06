#include "main.h"
/**
 * factorial - factorial of a given number
 *
 * @n: the number to return
 *
 * return:factorial of n,or -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

