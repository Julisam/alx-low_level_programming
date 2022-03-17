#include "main.h"

/**
 * print_most_numbers - print number 0-9 omit 2 & 4
 * Return : 1 if c is lower case 0 otherwise
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;

		_putchar(c);
	}
	_putchar('\n');

}
