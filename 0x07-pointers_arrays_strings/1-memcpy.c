#include "main.h"
#include <stdio.h>

/**
 * _memecpy - copies  fixed memory 
 * @dest: mem to be copied to
 * @src: source char to be copied
 * @n: amount of meme to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest++) = *(src++);
		i++;
	}
	return (dest);
}
