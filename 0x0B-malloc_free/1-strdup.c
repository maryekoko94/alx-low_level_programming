#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer
 * allocated space in memory, which contains a copy of
 * the string given as parameter.
 * @str: argument for array
 * Return: NULL is str=NULL, pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *strar, *strar1;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	strar = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = strar;
	strar1 = malloc(sizeof(char) * (len + 1));
	strar = strar1;

	if (strar1 != NULL)
	{
		for (; i < len; i++)
		{
			strar1[i] = *str;
			str++;
		}
		strar1[i] = '\0';
		return (strar);
	}
	else
		return (NULL);
}
