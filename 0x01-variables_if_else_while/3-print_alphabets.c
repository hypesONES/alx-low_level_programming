#include<stdio.h>
/**
 * main - print alphabets
 *
 * Return: Returns(0) Success
 */
int main(void)
{
	int a = 97;

	int b  = 65;
	
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}

	return (0);
}

