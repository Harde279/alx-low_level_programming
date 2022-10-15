#include <stdio.h>

/**
*main - print alphabets except q and e
*
*Return: Always 0
*/

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
