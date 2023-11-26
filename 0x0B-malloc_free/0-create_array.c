#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array: creates an array of chars,
 * and initializes with a specific char
 *
 * @size: the size of the array
 *
 * @c: the specific char
 *
 * Return: 1 or 0
*/

char *create_array(unsigned int size, char c);
{
	char *array = (char *)malloc((size + 1) * sizeof(char));

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
