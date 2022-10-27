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
		if (num != 9)
		{
			putchar(num + '0');
			putchar(' ');
			putchar(44);
		}
		else
			putchar(num + '0');
		num++;
	}
}
