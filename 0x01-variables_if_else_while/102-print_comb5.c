#include <stdio.h>
/**
 * main - prints lots of numbers
 * Return: returns 0
 */
int main(void)
{
	int m1, m2, n1, n2, h1, h2;

	h1 = '0';
	h2 = '1';
	for (m1 = '0', m2 = '0'; m2 <= '9'; m2++)
	{
		for (n1 = h1, n2 = h2; n2 <= '9' && n1 <= '9'; n2++)
		{
				putchar(m1);
				putchar(m2);
				putchar(' ');
				putchar(n1);
				putchar(n2);
			if (n2 == '9' && n1 != '9')
			{
				n2 = '0' - 1;
				n1++;
			}
			if (!(m1 == '9' && m2 == '8') || !(n1 == '9' && n2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}

		}
		if (m1 != '9' && m2 == '9')
		{
			m2 = '0' - 1;
			m1++;
		}
		if (h2 == '9')
		{
			h2 = '0';
			h1++;
		}
		else
			h2++;
	}
	putchar('\n');
	return (0);
}
