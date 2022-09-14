#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int x;

	char c;

	for (x = 1; x <= 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
