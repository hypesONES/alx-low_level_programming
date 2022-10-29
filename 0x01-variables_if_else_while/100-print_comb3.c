#include<stdio.h>
/**
 * main - prints possible combination of two digit
 *
 * Return: returns (0) - Success
 */
int main(void)
{
	int i;

	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
