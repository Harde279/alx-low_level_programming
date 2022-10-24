#include "main.h"
#include <stdio.h>

/**
* print_rev - print the reverse of the string passed
* @s: the parameter passed to the function
*/

void print_rev(char *s)
{
	int n, sum;

	for (n = 0; s[n] != '\0'; n++)
	{
		sum += 1;
	}
	for (n = sum; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');

}
