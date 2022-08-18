#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal time the number
 * of integer passed as argument
 *
 * @n: number of _s to print
 *
 * returns void
 *
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			k = i;

			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k++;
		}
	} else
	{
		_putchar('\n');
	}
}
