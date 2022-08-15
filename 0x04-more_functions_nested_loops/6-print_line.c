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
	while (n-- > 0)
	{
		_putchar('_');
	}

	_putchar('\n');
}
