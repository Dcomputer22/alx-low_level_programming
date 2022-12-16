#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * Return: Always 0
 * @r: number to be converted
*/

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
