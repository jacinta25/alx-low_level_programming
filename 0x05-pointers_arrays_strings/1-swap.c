#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: first input integer
 * @b: second input integer
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
