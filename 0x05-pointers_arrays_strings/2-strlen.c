#include "main.h"

/**
* _strlen - return the length of the string passed
* @s: parameter passed
* Return: length of the string passed as parameter
*/

int _strlen(char *s)
{
	int n, sum = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		sum += 1;
	}
	return (sum);
}

