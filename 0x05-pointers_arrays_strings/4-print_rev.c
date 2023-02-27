#include "main.h"

/**
 * puts2 - A function that prints one char out of 2 of a string.
 * @str: string
 * Return: no return
 */
void print_rev(char *s)
{
	int count = 0;
	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
