#include "main.h"
/**
 * _memset - fills the first n memory point in a buffer with a string
 * @s: buffer o be filled with n bytes
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: returns the pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{	
		s[i] = b;

		i++;
	}

	return (s);
}
