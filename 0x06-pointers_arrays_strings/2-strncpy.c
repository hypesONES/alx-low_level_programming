#include "main.h"
/**
 * strncpy - copies a string
 * @dest: stores string copy
 * @src: parameter for source string
 * @n: number of bytes
 *
 * Return: returns a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	
	return (dest);
}
