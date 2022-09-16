#include <stdio.h>
/**
 * main - prints fizz, buzz and fizz_buzz
 *
 * Returns: returns (0) Success
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
			printf("Fizz");
		else if (c % 5 == 0)
			printf("Buzz");
		else if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", c);
		printf(" ");
			
	}
	printf("\n")


}
