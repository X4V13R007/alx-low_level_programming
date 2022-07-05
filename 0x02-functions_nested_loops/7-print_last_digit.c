#include "main.h"

/**
 * print_last_digit - print last digit
 * @var: variable whose last digit is to be printed
 *
 * Return: the last digit
 */

int print_last_digit(int var)
{
	int lastDigit;

	if (var < 0)
	{
		lastDigit = (var % 10) * -1;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = var % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
