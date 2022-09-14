#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * @num: number whose abs is to be computed
 *
 * Return: returns the value of the abs function
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
