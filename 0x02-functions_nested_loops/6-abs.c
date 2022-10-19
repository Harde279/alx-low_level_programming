#include "main.h"

/**
* _abs - print absolute value of a number
* @n: parameter passed to the function
* Return: absolute value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
