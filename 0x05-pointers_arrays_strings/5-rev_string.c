#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 *
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	char h;
	int i;
	int j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		h = s[i];
		s[i] = s[j];
		s[j] = h;
	}
}
