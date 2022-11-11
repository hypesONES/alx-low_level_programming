#include "main.h"
/**
 * times_table - computes the 9 times table starting from 0.
 *
 * Return: return (0) - success
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((b * a) < 10 && b != 9)
			{
				_putchar((b * a) + '0');
			}
			else if ((b * a) >= 10)
			{
				_putchar(((b * a) / 10) + '0');
				_putchar(((b * a) % 10) + '0');
			}
			if ((b * a) < 10 && b != 9)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
			}
			else if ((b * a) >= 10 && b != 9)
			{
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
