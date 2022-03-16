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
	int i;
	long int t1 = 0;
	long int t2 = 1;

	int nextTerm = t1 + t2;

	for (i = 0; i < 50; ++i)
	{
		if (i != 49)
			printf("%d, ", nextTerm);
		else
			printf("%d,", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
