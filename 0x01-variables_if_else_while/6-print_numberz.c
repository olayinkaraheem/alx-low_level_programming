#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers[] = "0123456789";
	int counter;
	for (counter = 0; counter <= 9; counter++)
	{
		putchar(numbers[counter]);
	}
	putchar('\n');
	return (0);
}
