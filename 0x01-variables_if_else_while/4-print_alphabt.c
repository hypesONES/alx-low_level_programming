#include<stdio.h>
/**
 * main - print all lowercase alphabets except q and e
 *
 * Return: retuns (0) success
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a != 101 || a != 133)
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
