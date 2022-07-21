#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: the string to print
 *
 * Return: int.
 */

void _puts_recursion(char *s);
{
	if (*s == '\0')
		_putchar('\n');
	*s++;
	_puts_recursion(*s);
}
