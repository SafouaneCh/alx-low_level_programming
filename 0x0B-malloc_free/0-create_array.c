#include "main.h"

/**
 * create_array - create array of size size and assign char c
 *
 * @size: the size of the array
 *
 * @c: char to assign
 *
 * description: creat array of size size and assign char c
 *
 * Return: pointer to array, NULL if fail
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
