#include "main.h"

/**
 * jack_bauer - function that prints 24hrs time
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int i;
	int d;

	for (i = 0; i < 24; i++)
	{
		for (d = 0; d < 60; d++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			-putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
	return (0);
}

