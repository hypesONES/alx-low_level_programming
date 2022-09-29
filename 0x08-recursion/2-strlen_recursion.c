#include "main.h"
/**
 * _strlen_recursion - evaluates the lngth of a string
 * @s: string whose length is to be determined
 *
 * Return: returns length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s = (s + 1);
		return (1 +  _strlen_recursion(s));
	}
	else
		return (0);
}
