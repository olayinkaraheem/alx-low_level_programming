#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet or not.
 * @c: the character to check.
 *
 * returns 1 if an alphabet, 0 if not an alphabet
 *
 * Return: int.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
	if ((int)c >= 65 && (int)c <= 122)
		return (1);
	else
		return (0);
}
