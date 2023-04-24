#include "main.h"

/**
 *  _putchar - Prints or writes character to std output
 *  Takes only one argument
 *
 *  @c:Character input
 *
 *  Return: Character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
