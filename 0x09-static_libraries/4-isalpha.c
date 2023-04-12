#include "main.h"
/**
 * _isalpha - input 1 if lowercase or uppercase
 * input 0 if otherwise
 *
 * @c: ASCII code
 *
 * Return: 1 (uppercase or lowercase) 0 (otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 &&  c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
