#include<stdio.h>
/**
 * main - prints digit from 0 to 9
 *
 * Return: returns (0) Success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
