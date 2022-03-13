#include <stdio.h>

/**
 * main - prints out alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char startl = 'a';
	char startu = 'A';

	while (startl <= 'z')
	{
		putchar(startl);
		startl++;
	}
	while (startu <= 'Z')
	{
		putchar(startu);
		startu++;
	}
	putchar('\n');

	return (0);
}

