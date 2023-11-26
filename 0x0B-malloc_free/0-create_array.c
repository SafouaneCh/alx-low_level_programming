#include "main.h"

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

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == NULL)
	{
		return (0);
	}
	while (size--)
		array[size] = c;
	return (array);
}
