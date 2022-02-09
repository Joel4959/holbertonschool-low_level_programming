#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* positive_or_negative - debugging
*@n: Multiple mains
* Return: 0
*
*/
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
