#include "main.h"
/**
 * print_to_98 - print numbers
 * @n: the number from which we start counting
 * Return: void
 */

void print_to_98(int n)
{
	if(n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	
	}
}
