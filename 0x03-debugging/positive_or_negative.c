#include "main.h"
/**
 * main - prints integer as positive or negative
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
/**
 * positve_or_negative - prints numbers negative or positive
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
		printf("%d is negative\n", i);
}
