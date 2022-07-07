#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for uppercase character.
 * @c: the int for the paramaters of my function
 * Return: 0
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
		return (0);
}
