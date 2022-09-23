#include "main.h"
/**
 * string_toupper - changes characters f the string to uppercase
 * @s: string whose characters are to be reversed
 *
 * Return: returns uppercase
 */
char string_toupper(char *s)
{
	int a = 0;

	while (s[a++])
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
	}
	return (s);
}
