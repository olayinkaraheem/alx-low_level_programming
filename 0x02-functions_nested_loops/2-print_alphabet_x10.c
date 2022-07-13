#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets
 * in lowercase ending with a newline char ten times
 *
 * _putchar - writes the character c to stdout
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; ++i)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
