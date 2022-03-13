#include <stdio.h>

/**
 * main - prints out 0-9
 * Return: 0
 */
int main(void)
{
	int start = 48;

	while (start < 58)
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}

