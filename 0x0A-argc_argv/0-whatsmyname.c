#include <stdio.h>

/**
* main - return the values in command line arguements
* @argc: the number of command line arguments
* @argv: the array of command line arguments
* Return: Always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
