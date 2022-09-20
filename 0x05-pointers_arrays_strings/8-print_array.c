#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays on std output
 * @a: first parameter
 * @n: second int param
 *
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n-1))
		       printf(", ");	
	}
	printf("\n");
}
