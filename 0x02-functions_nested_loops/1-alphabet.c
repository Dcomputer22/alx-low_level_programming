#include "main.h"
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	for(int i = 'A'; i <=  'Z'; i++)
	{
		int lower_case = tolower(i);
		_putchar(lower_case);
		_putchar('\n');
	}
	return(0);
}
