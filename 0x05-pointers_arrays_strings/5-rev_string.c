#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: returns void
 */
void rev_string(char *s)
{
	int count  = 0;

	int a = 0;

	char rev[];

	while (s[count] != '\0')
	{
		count++;
	}
	
	while (count > 0)
	{
		count--;
		rev[a] = s[count];
		a++;
	}
	s = rev;
}
