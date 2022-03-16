#include "main.h"

/**
 * print_times_table - prints time table
 * @n: integer value
 * Return: (void)
 *
 */

void print_times_table(int n)
{
    if ((n <= 15) && (n >= 0))
    {
        int row = 0, col = 0, product;
        
        for (row = 0; row <=n; row++)
    	{
            for (col =0; col<=n; col++)
            {
                product  = row*col;
                printf("%d", product);
                if (col == n)
                    break;
                printf(",  ");
            }
            _putchar('\n');
        }
    }
}
	
