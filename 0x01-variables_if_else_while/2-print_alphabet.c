#include<stdio.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: retuns (0) success
 */
int main(void)
{
	int a  = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
