#include <unistd.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase or uppercase.
 * @letter: the character to check.
 *
 * returns 1 if uppercase, 0 if lowercase
 *
 * Return: int.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(char letter)
{
	if ((int)letter >= 97 && (int)letter <= 122)
		return (1);
	else
		return (0);
}
