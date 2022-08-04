#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

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
					|| (is_digit(argv[i]) == -1)
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

/**
 * is_digit - checks if char is a digit
 * @s: The character to be examined
 * Return: 1 else -1
 */
int is_digit(char *s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = strlen(s);
	while (i < k)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (-1);
		}
		else
			j = j * 10 + (s[i] - '0');
		i++;
	}
	return (j);
}
