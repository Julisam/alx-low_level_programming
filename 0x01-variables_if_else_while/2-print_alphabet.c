#include <stdio.h>

/**
 * main - prints out alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}

