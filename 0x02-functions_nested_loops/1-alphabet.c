#include "main.h"
/**
 * print_alphabet - function prints alphabets in lower case
 *
 * Return: returns (0)
 */
void print_alphabet(void)
{
	char first_alpha;
	for ( first_alpha = 'a'; first_alpha <= 'z'; first_alpha++)
	{
		_putchar(first_alpha);
	}

	_putchar('\n');

	return (0);
}
