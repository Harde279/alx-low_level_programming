#include "main.h"
#include <stdlib.h>

/**
* create_array - create an array of n memory size
* @n: the number memory size created
* @c: the  alphabet to be filled into the memory created
* Return: the pointer to the memory created
*/

char *create_array(unsigned int n, char c)
{
	unsigned int i;
	char *ptr;


	if (n == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
