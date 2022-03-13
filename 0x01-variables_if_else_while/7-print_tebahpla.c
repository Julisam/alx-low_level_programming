#include <stdio.h>

/**
 * main - prints out alphabets in lowercase only
 * Return: 0
 */
int main(void)
{
	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}
	putchar('\n');

	return (0);
}

