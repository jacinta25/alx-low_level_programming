#include "main.h"
/**
 * print_sign - determines input number is greater
 * equal or less than zero
 *
 * @n: interger input number
 *
 *Return: 1 (greater) 0 (zero) -1 (less)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
