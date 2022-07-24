#include <unistd.h>
#include "main.h"

int _is_prime(int num, int res);

/**
 * _is_prime - checks and returns the square root of a given number
 * @num: the num to divide with
 * @res: the given num
 *
 * Return: int
 */

int _is_prime(int num, int res)
{
	if (res % num == 0)
	{
		if (num != res)
			return (0);

		return (1);
	}

	return (_is_prime(1 + num, res));
}

/**
 * is_prime_number - checks if a given number is a prime number or not
 * @n: the number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	return (_is_prime(i, n));
}
