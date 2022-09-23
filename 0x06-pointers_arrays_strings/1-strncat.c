#include "main.h"
/** 
 * _strncat - concatenates two strings with and 
 * 	      inputed number of bytes from src.
 * @dest: first parameter to concate.
 * @src: secong val to concat after first value.
 * @n: number of bytes
 *
 * Return: returns address of resulting value
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
