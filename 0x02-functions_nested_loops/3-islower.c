#include "main.h"
 /**
  * _islower - show 1 if the input is lowercase
  * show 0 if otherwise
  *
  * @c; character in ASCII code
  *
  * Return: 1 (lowercase) 0 (otherwise)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
