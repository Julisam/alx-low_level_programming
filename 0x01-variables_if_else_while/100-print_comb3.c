#include <stdio.h>

/**
 * main - prsat prints all possible different combinations of two digits..
 * Return: 0
 */
int main(void)
{
	int start1;
	int start2;

	for (start1 = 48; start1 < 58; start1++)
	{
		for (start2 = 48; start2 < 58; start2++)
		{
			if (start1 >= start2)
				continue;
			putchar(start1);
			putchar(start2);
			if (start1 == 56 && start2 == 57)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

