#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character test
 * Return: 1 if c is a letter and 0 if c is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
