#include<stdio.h>
/**
 * main - prints number combinations
 *
 * Return: returns (0) - success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(44);
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
