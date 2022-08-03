#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * @argc: argument count
 * @argv: argument vector. A list of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
