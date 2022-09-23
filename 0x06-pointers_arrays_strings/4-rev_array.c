#include "main.h"
/**
 * reverse_array - funcin reverses an array
 * @a: Array to be reversed.
 * @n: Size f array 
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}

}
