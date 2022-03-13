#include <stdio.h>

/**
 * main - prints out 0-9
 * Return: 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		printf("%d", start);
		start++;
	}
	putchar('\n');

	return (0);
}

