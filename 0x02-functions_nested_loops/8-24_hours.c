#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minutes within 24hrs
 *
 * Return: Always return (0)- success
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(58);
					putchar(c + '0');
					putchar(d + '0');
					putchar('\n');
				}
			}
		}
	}
}
