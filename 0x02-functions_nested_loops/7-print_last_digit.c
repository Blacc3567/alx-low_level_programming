#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 *
 * @c: Digit.
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
		last_digit = (c % 10) * -1;
	else
		last_digit = c % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
