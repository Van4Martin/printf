#include "main.h"

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	return _print_string(str);
}
