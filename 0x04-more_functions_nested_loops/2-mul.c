#include <unistd.h>
#include "main.h"

/**
 * mul - multiplies two integers
 * @a: the first integer.
 * @b: the second integer
 *
 * returns result of a * b
 *
 * Return: int.
 * On error, -1 is returned, and errno is set appropriately.
 */

int mul(int a, int b)
{
	return (a * b);
}
