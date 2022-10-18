#include "main.h"

/**
* _islower - checks whether the alphabet is
* lowercase or uppercase
* Description: prints 1 when alphabet is lower* and 0 when unsuccessful
* @c: parameter to be passed
* Return: 1 when successful and 0 when unsuccesful
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
