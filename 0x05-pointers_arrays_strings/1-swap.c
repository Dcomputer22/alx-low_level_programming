#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * Return: 0 success
 * @a: first int value
 * @b: second int value
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
