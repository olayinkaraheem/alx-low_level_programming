#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints integers frim 0 to 14
 *
 * returns void
 *
 */

void more_numbers(void)
{
	int num;
	int const MAX = 14;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		while (num <= MAX)
		{
			if (num >= 10)
				_putchar((num/10) + '0');
			_putchar((num%10) + '0');
			num++;
		}
		num = 0;
		_putchar('\n');
	}
}
