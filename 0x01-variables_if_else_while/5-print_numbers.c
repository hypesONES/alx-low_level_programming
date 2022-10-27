#include<stdio.h>
/**
 * main - prints digits from 0 to 9
 *
 * Return: returns (0)
 */
int main(void)
{
	int num = 0;
	
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
}
