#include "main.h"
/**
 * _strlen - returns the length os a string
 *
 * @s:pointer to  char
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
