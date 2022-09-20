#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be revered.
 *
 * Return: returns void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
