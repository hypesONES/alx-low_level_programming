#include<stdio.h>
/**
 * main - prints alphabet in lowercase in reverse
 *
 * Return: returns (0) - success
 */
int main(void)
{
	int reverse = 122;

	while (reverse >= 97)
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
