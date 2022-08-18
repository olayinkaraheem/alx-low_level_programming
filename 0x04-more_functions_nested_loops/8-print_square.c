#include <unistd.h>
#include "main.h"

/**
 * print_square - prints a square of # based on the number
 * of integer passed as argument
 *
 * @size: number of #s to print
 *
 * returns void
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
