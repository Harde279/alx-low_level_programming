#include "main.h"
#include <stdio.h>

/**
* _puts - prints string with terminating null byte
* @str: parameter to be printed
*/

void _puts(char *str)
{
	int a;

	for (a  = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
