#include <unistd.h>
#include "main.h"

/**
 * _strlen_recursion - prints the length a string using recursion
 * @s: the string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
