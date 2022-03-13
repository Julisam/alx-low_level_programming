#include <stdio.h>

/**
 * main - prints out alphabets in lowercase only
 * Return: 0
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		if (start == 'e' || start == 'q')
		{
			start++;
			continue;
		}
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}

