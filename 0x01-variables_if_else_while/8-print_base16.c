#include <stdio.h>

/**
 * main - main entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0 ; < 10 ; i++)
		putchar(i + '0');
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
