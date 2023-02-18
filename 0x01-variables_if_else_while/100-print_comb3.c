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

	for (i = 0 ; i < 10 ; i++)
	{ 
		for (d = 1 ; d < 10 ; d++)
		{
			if (i < d && i != d)
			{
				putchar(i + '0');
				putchar(d + '0');
				if (i + d != 17)
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
