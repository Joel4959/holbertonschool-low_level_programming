#include <stdio.h>
/**
*main - main
*Return: 0
*description: alfabeto may. min.
*/
int main(void)
	{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
	}
