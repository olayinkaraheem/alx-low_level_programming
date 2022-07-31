#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - prints integers frim 0 to 9 except 2 and 4
 *
 * returns void
 *
 */

void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
