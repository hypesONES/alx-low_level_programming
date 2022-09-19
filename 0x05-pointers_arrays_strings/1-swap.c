#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer value to be swaped (first value)
 * @b: second int value to e swapped (second value)
 *
 * Returns: returns void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	int d = *b;

	*a = d;

	*b = c;

}
