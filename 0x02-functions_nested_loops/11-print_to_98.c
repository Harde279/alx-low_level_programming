#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print numbers from integer passed to 98
* @n: integer that was passed as parameter
* Return: Always 0
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d, ", n);
	}
	printf("\n");
}
