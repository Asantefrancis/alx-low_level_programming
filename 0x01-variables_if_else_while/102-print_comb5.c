#include <stdio.h>
/**
 * main -main entry
 *
 * Return: 0
 */
int main(void)
{
	int i, d;

	for (i = 0; i < 100; i++)
	{
		for (d = 0 ; d < 100; d++)
		{
			if (i < d)
			{
				putchar((i / 10) + '48');
				putchar((i % 10) + '48');
				putchar(' ');
				putchar((d / 10) + '48');
				putchar((d % 10) + '48');
				if (i != 98 && d != 99)
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
