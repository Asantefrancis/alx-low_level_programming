#include <stdio.h>

/**
 * main - main entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int d;
	int a;

	for (i = 0 ; i < 10 ; i++)
	{
		for (d = 1 ; d < 10 ; d++)
		{
			for (a = 2 ; a < 10 ; a++)
			{
				putchar(i + '0');
				putchar(d + '0');
				putchar(a + '0');
				if (i + d + a != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
