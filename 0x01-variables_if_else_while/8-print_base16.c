#include <stdio.h>

/**
 * main - prints out 0-9
 * Return: 0
 */
int main(void)
{
	int start = 48;
	char i;

	while (start < 58)
	{
		putchar(start);
		start++;
	}
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

