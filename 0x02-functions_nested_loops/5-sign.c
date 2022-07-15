#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: the character to check.
 *
 * returns 1 if number is greater than one, 0 if number is zero
 * -1 if number is less than one
 *
 * Return: int.
 */

int print_sign(int c)
{
	if (c > 1)
	{
		printf("%c", '+');
		return (1);
	} else if (num == 0)
	{
		printf("%c", '0');
		return (0);
	}
	printf("%c", '-');
	return (-1);
}
