#include <unistd.h>
#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not.
 * @c: the character to check.
 *
 * returns 1 if c is a digit, 0 if not a digit
 *
 * Return: int.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
