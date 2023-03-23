#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers bn 0 an 10 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if ((a != 2 && a != 4))
		{
			printf("%d", a);
		}
	}

	_putchar('\n');
}
