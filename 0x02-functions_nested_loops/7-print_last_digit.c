#include "main.h"
/**
 * print_last_digit - print last digit of a given num
 * @num: parameter to be worked on
 *
 * Return: returns the last digit of the given num
 */
int print_last_digit(int num)
{
	if (num > 0)
	{
		num = num % 10;
		_putchar(num);
		return (num);
	}
	else 
	{
		num = num * -1;
		num = num % 10;
		_putchar(num);
		return (num);
	}
}
