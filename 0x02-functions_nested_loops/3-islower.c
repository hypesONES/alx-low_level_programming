#include "main.h"
/**
 * _islower -checks if a character is lowercase
 *
 * Returns: 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	int alpha;

	if (alpha >= 97 && alpha <= 122)
		return (1);
	else
		return (0);
}
