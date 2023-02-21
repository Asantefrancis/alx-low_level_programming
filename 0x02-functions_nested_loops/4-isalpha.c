#include "main.h"

/**
 * _isalpha - checks for char alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if character is lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
