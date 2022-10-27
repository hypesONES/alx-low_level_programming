#include<stdio.h>
/**
 * main - prints digit in hexadecimal
 *
 * Return: returns (0) - success
 */
int main(void)
{
	int hex = 0;

	int b;

	while (hex < 16)
	{
		if (hex < 10)
			putchar(hex + '0');
		else
		{
			b = hex + 87;
			putchar(b);
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
