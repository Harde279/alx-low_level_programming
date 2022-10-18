#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description: prints lowercase alphabet
* 10 times
* Return: 0 when succesful
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
