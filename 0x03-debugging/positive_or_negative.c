#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative -prints positive and negative numbers
 * Return: void
 * @i: the integer given
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zeron", i);
}
