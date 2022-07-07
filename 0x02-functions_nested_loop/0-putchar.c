#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char text[] = "_putchar";

	for (n = 0; n < (int) strlen(text); ++n) {
		_putchar(text[n]);
	}
	_putchar('\n');

	return (0);
}
