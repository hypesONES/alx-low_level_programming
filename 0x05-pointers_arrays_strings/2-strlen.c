#include "main.h"
/**
 * _strlen - returns th length of a string
 * @s address of sring whose length is to be checked
 *
 * Return: returns length od string as an integer
 */
int _strlen(char *s)
{
	int count  = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
