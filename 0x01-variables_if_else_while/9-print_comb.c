#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int start;

	for (start = 48; start < 58; start++)
	{
		putchar(start);
		if (start == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

