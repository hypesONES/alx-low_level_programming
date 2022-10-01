#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - prints the last digit of a rand num
 *
 * Return: returns (0) sucess
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n / 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than %d"
				, n, n / 10, 5);
	}
	else if (n / 10 == 0)
	{
		printf("Last digit of %d is %d and is %d", n, n / 10, 0);
	}
	else if (n / 10 < 6 && n / 10 != 0)
	{
		printf("Last digit of %d is %d and is less than %d and not %d",
				n, n / 10, 6, 0);
	}
	return (0);
}
