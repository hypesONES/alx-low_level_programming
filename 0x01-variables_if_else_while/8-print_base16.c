#include<stdio.h>
/**
 * main - prints digit in hexadecimal
 *
 * Return: returns (0) - success
 */
int main(void)
{
	int hex = 0;

	while (hex <= 16)
	{
		if (hex < 10)
			putchar(hex + '0');
		else
		{
			hex = hex + 87;
			putchar(hex);
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
