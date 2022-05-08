#include "main.h"
/**
  * _strlen - calculates the length of the string
  * @s: input
  * Return: length of string
  */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */

unsigned int binary_to_uint(const char *b)
{
	int pos;
	unsigned int result = 0;
	unsigned int power = 1;

	if (!*b || b == NULL || b[0] == '\0')
	{
		return (0);
	}

	for (pos = _strlen(b) - 1; pos >= 0; pos--)
	{
		if  (b[pos] == '0')
		{
		}
		else if  (b[pos] == '1')
		{
			result += power;
		}
		else
		{
			return (0);
		}
		power *= 2;
	}

	return (result);

}
