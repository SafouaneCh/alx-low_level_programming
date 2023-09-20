#include <stdio.h>

/**
 * main - entry point
 *
 * Description: lowercase and uppercase
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'a';
	char sh = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (sh <= 'Z')
	{
		putchar(sh);
		sh++;
	}
	putchar('\n');
	return (0);
}
