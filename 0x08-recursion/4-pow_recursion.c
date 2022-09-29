#include "main.h"
/**
 * _pow_recursion: calculates the power of an interger
 * @x: the int whose pow is to be calculated
 * @y: the pow
 *
 * Return: returns the power of the integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		return (x * _pow_recursion(x, (y-1)));
	}
}
