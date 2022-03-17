#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c : integer value
 * Return: 1 if c is lower case 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
