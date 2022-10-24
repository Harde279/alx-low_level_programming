#include "main.h"

/**
* print_rev - print the reverse of the string passed
* @s: the parameter passed to the function
*/

void print_rev(char *s)
{
	int n, m, sum;

	for (n = 0; s[n] != '\0'; n++)
	{
		sum += 1;
	}
	for (m = sum; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');

}
