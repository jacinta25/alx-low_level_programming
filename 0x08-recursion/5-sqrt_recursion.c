#include "main.h"
/**
 *_sqrt_recursion - natural square root of a number
 *
 * @n: number to compute
 *
 * Return:the natural square root of n
 */
int _sqrt_recursion_helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 1));
}
/**
 * _sqrt_recursion_helper - helps _sqrt_recursion to calculate square root
 *
 * @n: number to compute the square root of
 * @i: iteratoer to check possible roots
 *
 * Return: square rooot of n
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursion_helper(n, i + 1));
	}
}
