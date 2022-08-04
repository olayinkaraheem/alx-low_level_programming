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
	int coins[] = {25, 10, 5, 2, 1};
	int i, amount, change = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", '0');
	}
	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
