#include <stdio.h>
/*
 * main - Print the size of values
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (long unsigned int)sizeof(char));
	printf("Size of an int: %d byte(s)\n" (long unsigned int)sizeof(int));
	printf("Size of a long int: %d bytes(s) \n", (long unsigned int)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (long unsigned int)sizeof(long long int));
	printf("Size of float: %d byte(s)\n", (unsigned long int)sizeof(float));
	return (0);
}
