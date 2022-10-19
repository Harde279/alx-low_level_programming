#include "main.h"

/**
* print_sign - print the sign of the numbers whether positive,negative or zero
* @n: parameter that is passed
* Return: 1 , -1 and 0 depending on the condition satisfied
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
