#include "main.h"
/**
 * print_sign - print the signs of numbers
 * Return: 1 and + if n is > 0
 *0 and 0 if n is 0 and -1 and - if n is less than 0
 *@n: the number being declared
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
