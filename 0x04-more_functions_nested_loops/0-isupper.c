#include <unistd.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not.
 * @letter: the character to check.
 *
 * returns 1 if uppercase, 0 if lowercase
 *
 * Return: int.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int letter)
{
	if (letter >= 65 && letter <= 90)
		return (1);
	else
		return (0);
}
