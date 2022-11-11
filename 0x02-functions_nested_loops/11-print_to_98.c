#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - print natural numbers to 98
 * @n: prints natural numbers from n to 98
 *
 * Return: no return is expected
 */
void print_to_98(int n)
{
	int count;

	if (n <= 98)
	{
		printf("%d", n);

		count = n + 1;

		for (count = n; count <= 98; count++)
		{
			printf (" ,%d", count);
		}
		printf ("\n");
	}
	else
	{
		printf("%d", n);

		count = count - 1;

		for (count; count >= 98; count--)
		{
			printf (" ,%d", count);
		}
	}
}
