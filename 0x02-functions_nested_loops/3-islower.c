#include "main.h"
/**
 * _islower - - check lowercase character
 * @c: value to check
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c > 97 && c <= 123)
		return (1);
	return (0);
}
