#include <stdio.h>

/**
 * main - prints alphabet in lower and upper
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
