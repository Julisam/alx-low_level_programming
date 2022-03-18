#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

/*	if (n == 0) */
/*		_putchar(n + '0'); */

	if (n / 10 > 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');

}
