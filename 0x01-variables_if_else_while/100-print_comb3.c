#include <stdio.h>

/**
 * main - prints 00 to 99 where no two numbers are the same
 * Return: returns 0
 */
int main(void)
{
	int a, b;

	for (a = '0', b = '0'; a <= '9'; a++)
	{
		if (b < a)
		{
			putchar(b);
			putchar(a);

			if (b != '8' || a != '9')
			{
				putchar(',');
				putchar(' ');
			}

		}

		if (b != '9' && a == '9')
		{
			b++;
			a = '0' - 1;
		}
	}

	putchar('\n');

	return (0);
}
