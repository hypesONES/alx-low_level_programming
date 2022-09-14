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
		last_digit = num % 10;
		_putchar('last_digit');
		return (last_digit);
	else 
	{
		last_digit = num * -1;
		last_digit = last_digit % 10;
		_putchar('last_digit');
		return (last_digit);
	}
}
