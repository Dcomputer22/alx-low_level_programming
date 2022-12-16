#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * Return: Always 0
 * @s: the number whose last digit is been printed
 * @f: last digit
 */

int print_last_digit(int s)
{
	int f;
	if (s < 0)
		s = -s;
	f = s % 10;

	if (f < 0)
		f = -f;
	_putchar(f + '0');
	return (f);
}

