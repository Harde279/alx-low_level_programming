#include <stdio.h>

/**
* main - print lower and upper alphabets
*
* Return: Always 0
*/

int main(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
