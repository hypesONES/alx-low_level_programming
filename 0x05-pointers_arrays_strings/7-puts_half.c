#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to be printed
 *
 * Return: reuturns void
 */
void puts_half(char *str)
{
	int a = 0;

	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b = b + 1;
	}
	else
		k = j / 2;
	for (; b < a; b++)
		_putchar(str[b]);
}
