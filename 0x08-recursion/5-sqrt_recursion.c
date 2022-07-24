#include <unistd.h>
#include "main.h"
# include "4-pow_recursion.c"

int _is_square(int num, int res);

/**
 * _is_square - checks and returns the square root of a given number
 * @num: the number to square
 * @res: the expexted square of num
 *
 * Return: int
 */

int _is_square(int num, int res)
{
	int square;

	if ((num == 0 || num == 1) && num == res)
		return (num);
	square = _pow_recursion(num, 2);
	if (square == res)
		return (num);
	if (square < res)
		return (_is_square(1 + num, res));
	return (-1);
}

/**
 * _sqrt_recursion - returns the square root of a given number
 * @n: the number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_is_square(i, n));
}
