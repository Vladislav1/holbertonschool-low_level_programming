#include <stdio.h>

/**
 * main - prints hex
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (n = 'a'; n < 'g'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
