#include "main.h"
/**
 * _isalpha - check alphabetic character
 * @j: lowercase or uppercase
 * Return: Always 0.
 */
int _isalpha(int j)


{
	if (j > 97 && j <= 123)
	{
	return (1);
	}
	if (j > 65 && j <= 91)
	return (1);

	return (0);
}
