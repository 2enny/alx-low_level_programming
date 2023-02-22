#include "main.h"

/**
 * print_last_digit - prints the last digit
 * 
 * @n: function parameter
 *
 * Return: 1
 */

int print_last_digit(int n)
{
	int i:

	i = n % 10:
	if (n < 0)
	        i = -1;
	_putchrt(i);
}
