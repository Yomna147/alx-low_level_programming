#include "main.h"

/**
 * print_alphabet - print all lowercase character
 *
 * Return: void
 */
void print_alphabet(void)
{
	int count = 0;
	char lc;

	while (count++ <= 9)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n')
	}
}
