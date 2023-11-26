#include <stdio.h>
#include <stdlib.h>

/**
 * create_array: creates an array of chars and initializes it with a specific c
 *
 * @size: the size of the array
 *
 * @c: the specific char
 *
 * Returns a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c);
{
	char *array = (char *)malloc((size + 1) * sizeof(char));

	if size == 0;
	{
		return (NULL);
	}

	else
	{
		for (int i = 0; i < size; i++)
		{
			array[i] = c;
		}
		array[size] = '\0';
	}
	return (array);
}
