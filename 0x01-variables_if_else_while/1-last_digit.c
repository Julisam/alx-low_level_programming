#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of a number
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	last_digit = n % 10;

	printf("%d ", last_digit);
	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	printf("\n");

	return (0);
}
