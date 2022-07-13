#include <unistd.h>

/**
 * print_alphabet - prints all alphabets in lowercase
 * _putchar - writes the character c to stdout
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
