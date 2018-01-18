#include <stdio.h>

/**
 * main - prints alphabet
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
