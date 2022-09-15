#include "main.h"
/**
 * _digit - checks if an input is a digit
 * @c: input value to be checked
 *
 * Return: returns 1 for digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else 
		return (0);
}
