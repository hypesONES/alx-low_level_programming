#include "main.h"
/**
 * _puts - prints a string 
 * @str: string to be printed
 *
 * Return: returns void
 */
void _puts(char *str)
{
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
