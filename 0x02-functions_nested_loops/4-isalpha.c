#include "main.h"
/**
 * _isalpha - checks if a char is uppercase
 * @c: character whose case is to be determined
 *
 * Return: Returns 1 if uppercase and zero otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
