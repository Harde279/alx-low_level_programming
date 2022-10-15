#include <stdio.h>

/**
* main - prints the characters in hexadecimal
* Return: Always 0
*/

int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar(h + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
