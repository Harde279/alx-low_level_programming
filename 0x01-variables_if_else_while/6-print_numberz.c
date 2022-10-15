#include <stdio.h>

/**
*main - print numbers in base 10 using putchar
*Return: Always 0
*/

int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p + '0');
	}
	putchar('\n');
	return (0);
}
