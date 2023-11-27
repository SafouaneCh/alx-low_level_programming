#include "main.h"

/**
 * _strdup -  returns a pointer to a new string
 *
 * @str: string
 *
 * Return: (0)
*/

char *_strdup(char *str)
{
	char *array;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	array = malloc((i + 1) * sizeof(char));

	for (r = 0; str[r]; r++)
		array[r] = str[r];
	return (array);
}
