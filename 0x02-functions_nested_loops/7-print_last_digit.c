#include "main.h"
#include<limits.h>
/**
 * print_last_digit - print last digit of a given num
 * @num: parameter to be worked on
 *
 * Return: returns the last digit of the given num
 */
int print_last_digit(int num)
{
	int last_num;

	if (num >= 0)
	{
		last_num = num % 10;
		_putchar(last_num + '0');
		return (last_num);
	}
	else
	{
		num = num * -1;
		last_num = num % 10;
		_putchar(last_num + '0');
		last_num = last_num * -1;
		return (last_num);
	}
}
