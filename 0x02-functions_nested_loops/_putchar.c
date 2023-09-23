#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character x to stdout
 *@x: the character to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errmo is set appropriately
*/

int _putchar(char x)
{
	return (write(1, &c, 1));
}
