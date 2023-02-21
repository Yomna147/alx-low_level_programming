#include "main.h"

/**
 * print_alphabet_x10 - print all lowercase character 10times
 *
 * Description: using nested while-for loop
 *
 * Return: void
 */
void print_alphabet_x10(void);
{
	int count = 0;
	char lc;

	while (count++ <= 9)

	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
