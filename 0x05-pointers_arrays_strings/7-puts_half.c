#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int len = 0;
	char *p = str;

	while (*p++)
		len++;

	p = str + (len + 1) / 2;

	while (*p)
		_putchar(*p++);

	_putchar('\n');
}
