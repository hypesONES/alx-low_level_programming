#include "main.h"
/**
 * cap_string - capitalizes all word of a string
 * @str: parameter to capitalize
 *
 * Return: returns the capitalised version of param
 */
char *cap_string(char *str)
{
	int i = 0, j;

	char chars[] = " \t\n,;.!?\"(){}";

	while(*(str + 1))
	{
		if (*(str + 1) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i - 1))
						*(str + 1) -= 'a' -'A';
				}
			}
		}
	}
	return (str);
}
