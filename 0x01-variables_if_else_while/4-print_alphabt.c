#include <stdio.h>

/**
 * main - entry point
 *
 * Description: all lowercase except q and e
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e')
			ch++;
		else if (ch == 'q')
			ch++;
		else
			putchar(ch);
			ch++;
	}
	putchar('\n');
	return (0);
}
