#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tells how large last value is
 * Return: returns 0
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("%d and is greater than 5\n", last_digit);
	if (n == 0)
		printf("%d and is 0\n", last_digit);
	if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", last_digit);

	return (0);
}
