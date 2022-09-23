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
	int i = 0;

	int j = 0;
	
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	int k = i + j;
	
	char newstr[k];

	int m;

	for (m = 0; m < i; m++)
	{
		newstr[m] = dest[m];
	}
	
	int n;
	
	for (n = 0; n < k; n++)
		newstr[n + m] = src[n];
	newstr[k] = '\0';
	return (&newstr);

}
