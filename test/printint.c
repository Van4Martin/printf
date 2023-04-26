#include "main.h"

/**
 * printint - print interget to standard output
 * @x: integer to be printed
 * Authors: Godswill && Martin
 * Return: count
*/


int printint(int x)
{
	int count = 0;

	if (x < 0)
	{
		_putchar('-');
		count++;
		x = -x;
	}

	if (x / 10)
	{
		printint(x / 10);
		count++;
	}

	_putchar(x % 10 + '0');
	count++;

	return (count);


}

