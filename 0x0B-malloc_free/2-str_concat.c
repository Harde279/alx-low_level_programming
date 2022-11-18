#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: the string to be concatenated upon
* @s2: the string to be concatenated to s1
*
* Return: if fail - NULL
*	  if success - pointer to a newly concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	ptr = (char *)malloc(sizeof(char) * len);

	if (ptr == NULL)
		return NULL;
	for (i = 0; s1[i] != '\0'; i++)
		ptr[concat_index++] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		ptr[concat_index++] = s2[i];

	return (ptr);
}
