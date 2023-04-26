#include "main.h"

int print_char(va_list args)
{
	char c = (char) va_arg(args, int);
	return _putchar(c);
}
