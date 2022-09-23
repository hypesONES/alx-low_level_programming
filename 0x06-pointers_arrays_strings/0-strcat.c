#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first parameter to be concatenated
 * @src: second word to concat behind first(@dest)
 *
 * Return: retuns the memory position of concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
