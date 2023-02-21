#include "main.h"

/**
 * _islower - function that checks for lowercase alphabets
 *
 *@c: parameter to be printed
 *
 * Return: 0
 */
int _islower(int c)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
