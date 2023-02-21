#include "main.h"

/**
 * print_last_digit - function that prints last digits
 *
 * @i: function parameter
 *
 * Return: 0
 */

int print_last_digit(int i)
{
	int d;

	d = i % 10;
	if (d < 0)
		d = -d;
	_putchar(d + '0');
	return (0);
}
