#include "main.h"

/**
 * print_last_digit - print last digit
 * @var: variable whose last digit is to be printed
 *
 * Return: the last digit
 */

int print_last_digit(int var)
{
	if (var < 0)
		var = var * -1;
	_putchar((var % 10) + '0');
	return (var % 10);
}
