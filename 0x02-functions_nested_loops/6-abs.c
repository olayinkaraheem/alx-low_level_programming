#include <unistd.h>
#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @c: an integer value
 *
 * Return: int.
 */

int _abs(int c)
{
	if (c >= 1)
		return (1 * c);
	return (-1 * c);
}
