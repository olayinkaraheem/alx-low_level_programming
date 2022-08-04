#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * @argc: argument count
 * @argv: argument vector. A list of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (
					((int)*argv[i] >= 65 && (int)*argv[i] <= 122)
					|| (isdigit((int)*argv[i]) < 1)
			)
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
