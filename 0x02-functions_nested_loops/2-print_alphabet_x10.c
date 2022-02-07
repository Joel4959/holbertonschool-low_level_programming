#include "main.h"
/**
 * print_alphabet_x10 - - desription: 10 x alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int b;

	for (b = 1; b < 11; b++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
