#include <stdio.h>

/**
 * main - prints 00 to 99 where no two numbers are the same
 * Return: returns 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0', b = '0', c = '0'; a <= '9'; a++)
	{
		if (b < a && c < b)
		{
			putchar(c);
			putchar(b);
			putchar(a);

			if (c != 7 || b != '8' || a != '9')
			{
				putchar(',');
				putchar(' ');
			}

		}

		if (c != '9' && b != '9' && a == '9')
		{
			b++;
			a = '0' - 1;
		}
		if (c != '9' && b == '9' && a == '9')
		{
			c++;
			b = '0';
			a = '0' - 1;
		}
	}

	putchar('\n');

	return (0);
}
