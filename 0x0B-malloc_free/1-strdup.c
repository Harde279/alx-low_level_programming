#include "main.h"
#include <stdlib.h>

/**
*  _strdup - returns a pointer to a newly allocated space in memory containi
*  ng a copy of the string given in parameter
*  @str: the string to be copied
*  Return: if str == NULL or insufficient memory is available - NULL
*  otherwise - a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int i, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	ptr[len] = '\0';

	return (ptr);
}
