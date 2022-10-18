#include "main.h"

/**
* _isalpha - checks whether its lowercase or uppercase alphabet
* @c: parameter to be passed
* Return: 1 when succesful and 0 when unsuccessful
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
