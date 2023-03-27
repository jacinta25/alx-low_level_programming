#include "main.h"
/**
 * rev_string -  reverses a string.
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char h;
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
		j--;
	}
	while (i < j)
	{
		h = s[i];
		s[i] = s[j];
		s[j] = h;
			i++;
			j--;
	}
}
