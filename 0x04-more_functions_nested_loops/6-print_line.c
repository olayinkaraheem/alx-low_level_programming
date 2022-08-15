#include <unistd.h>
#include "main.h"

/**
 * print_line - prints _ number of integer passed as argument
 *
 * @n: number of _s to print
 *
 * returns void
 *
 */

void print_line(int n)
{
	int num = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (num <= n)
	{
		_putchar('_');
		num++;
	}
	_putchar('\n');
}
