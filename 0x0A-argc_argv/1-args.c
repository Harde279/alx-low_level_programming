#include <stdio.h>

/**
* main - print all the arguements passed to the function
* @argc: the number of command line arguments
* @argv: the array of command line arguments
* Return: Always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int result;

	result = argc - 1;
	printf("%d\n", result);
	return (0);
}
