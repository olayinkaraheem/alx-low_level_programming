#include <unistd.h>
#include "main.h"

/**
 * print_numbers - prints integers frim 0 to 9
 *
 * returns void
 *
 */

void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num++);
	}
	_putchar('\n');
}
