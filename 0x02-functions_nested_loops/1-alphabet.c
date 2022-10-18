#include "main.h"

/**
* main - Entry point
* Description: Print alphabets in lowercase
* Return: O when successful
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
