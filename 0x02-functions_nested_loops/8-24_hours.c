#include<stdio.h>
/**
 * main - prints every minutes within 24hrs
 *
 * Return: Always returnd (0)- success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				putchar(0 + '0');
				putchar(a + '0');
			}
			else
				putchar(a + '0');
			putchar(58);
			if (b < 10)
			{
				putchar(0 + '0');
				putchar(b + '0');
			}
			else
				putchar(b + '0');
		}
	}
	return (0);
}
