#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: an integer value
 *
 * Return: int.
 */

int print_last_digit(int c)
{
	int o;

	o = c % 10;

	if (c < 0)
		o *= -1;

	_putchar('0' + o);
	return (o);
}
