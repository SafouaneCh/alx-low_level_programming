#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * Return: (0)
*/

char *str_concat(char *s1, char *s2)
{
	int i, r;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s2[i] != '\0')
		i++;
	while (s1[ele] != '\0')
		ele++;
	char *array = malloc((i + ele + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);
	i = ele = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	while (s2[ele] != '\0')
	{
		array[i] = s2[ele];
		ele++;
	}
	array[i] = '\0';
	return (array);
}
