#include <stdio.h>

/**
* main - print alphabets in lowercase
*
* Return: Always 0
*/

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
