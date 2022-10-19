#include "main.h"

/**
* print_last_digit - Print last digit of the integers
* @l: parameter passed to the function
* Return: the last digit of the integer
*/

int print_last_digit(int l)
{
	int m;

	m = l % 10;

	if (m < 0)
	{
		m *= -1;
	}
	_putchar(m + '0');
	return (m);
}
