#include "main.h"

/**
 * print_numbers - prints numbers on stdout
 *
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	
	_putchar('\n');
}
