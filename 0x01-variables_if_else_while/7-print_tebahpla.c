#include <stdio.h>

/**
* main - print alphabets from a to z in reverse
* Return: Always 0
*/

int main(void)
{
	int r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
