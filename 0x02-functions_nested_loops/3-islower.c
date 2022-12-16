#include "main.h"
/**
 * _islower - checks for lower case letters
 * Return: 1 of character is lower and 0 if character is not
 * @c: character test
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
