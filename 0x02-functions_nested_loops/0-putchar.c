#include "main.h"

/**
* main - Entry point
*
* Description: Print putchar followed by a new line
* Return: Always 0
*/

int main(void)
{
	int i;

	char s[] = "_putchar";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
