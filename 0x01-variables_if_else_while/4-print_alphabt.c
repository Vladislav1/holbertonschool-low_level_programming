#include <stdio.h>

/**
 * main - prints alphabet except e and q
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}

	putchar('\n');

	return (0);
}
