#include <stdio.h>
#include <stdlib.h>

/**
* main - print the result of addition of the numbers passed
* @argc: the numbers of command line arguments
* @argv: the array of command line arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return  (0);
}
