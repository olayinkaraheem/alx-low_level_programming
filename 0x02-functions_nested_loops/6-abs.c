#include <unistd.h>
#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 *
 * Return: int.
 */

int _abs(int c)
{
	if (c >= 1)
		return (1 * c);
	return (-1 * c);
}
