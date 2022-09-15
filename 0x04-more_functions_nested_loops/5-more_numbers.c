#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 *
 * Returns : void
 */
void more_numbers()
{
	int count;

	char n;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n);
			_putchar('\n');
		}
	}

	_putchar('\n');
}
