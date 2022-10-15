#include <stdio.h>

/**
* main - print single digits with spaces in front of it
* Return: Always 0
*
*/

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}
