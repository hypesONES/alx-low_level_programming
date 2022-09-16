#include "main.h"
/**
 * _isupper - Evaluates if a character is uppercase
 * @c: Character whose case is to evaluated
 *
 * Return: returns 1 for uppercase and 0 otherwise
 */

int _isupper(int c)

{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
