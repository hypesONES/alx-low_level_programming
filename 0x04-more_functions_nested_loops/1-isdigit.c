#include "main.h"
/**
 * _isdigit - checks if an input is a digit
 * @c: number value to be checked
 *
 * Return: Returns 1 for digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
