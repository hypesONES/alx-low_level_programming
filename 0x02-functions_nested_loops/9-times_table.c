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
			if ((b * a) < 10)
			{
				putchar((b * a) + '0');
			}
			else
				putchar(((b * a) / 10) + '0');
			if (b != 9)
			{
				putchar(44);
				putchar(' ');
			}
		}
		ptchar('\n');
	}
}
