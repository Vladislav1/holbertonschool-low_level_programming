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

	printf("Last digit of %d is ", n);

	if (n > 5)
		printf("%d and is greater than 5\n", n % 10);
	if (n == 0)
		printf("%d and is 0\n", n % 10);
	if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", n % 10);

	return (0);
}
