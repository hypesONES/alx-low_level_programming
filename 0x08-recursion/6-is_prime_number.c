#include "main.h"
/**
 * is_prime_number - checks if an nteger is a prime number
 * @n: integer to be cheecked
 *
 * Return: returns 1 if prime and 0 if even
 */
int is_prime_number(int n)
{
	if (n % 2 == 1)
		return (1);
	else
		return (0);
}
