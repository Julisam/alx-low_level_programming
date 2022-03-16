#include "main.h"
#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: <0) for success <1> for failure
 *
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
