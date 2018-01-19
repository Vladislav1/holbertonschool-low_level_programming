#include <stdio.h>

/**
 * main - prints lots of numbers
 * Return: returns 0
 */
int main(void)
{
	int m1 = '0';
	int m2 = '0';
	int n1 = '0';
	int n2 = '0';
	int hold1 = '0';
	int hold2 = '1';
	int end = '1';

	for (m1 = '0', m2 = '0'; m2 <= '9'; m2++)
	{
		for (n1 = hold1, n2 = hold2; n2 <= '9'; n2++)
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
		if (end == 0)
		{
			putchar('\n');
			return (0);
		}
		if (m1 != '9' && m2 == '9')
		{
			m2 = '0' - 1;
			m1++;
		}


		if (hold2 == '9')
		{
			hold2 = '0';
			hold1++;
		}
		else
		{
			hold2++;
		}
		if (hold1 == '9' && hold2 == '9')
			end = 0;

	}



	return (0);
}
