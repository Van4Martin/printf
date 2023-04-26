#include "main.h"
#include <string.h>

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	size = strlen(format);
	if (size <= 0)
	{
		return (0);
	}
	va_start(args, format);
	size = han(format, args);
	va_end(args);
	
	return (size);
}


/*
int han(const char *format, va_list args)
{
	int size = 0;
	int i = 0;
	
	while (format[i] != '\0')
{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
			case 'c': 
				size += _putchar(va_arg(args, int));
				break;
			case 's':
				{
					char *str = va_arg(args, char*);
					_print_string(str);
				
				break;
				}
			case '%':
                                        size += _putchar('%');
                                        break;
                                case 'd':
                                case 'i':
                                        size += printint(va_arg(arg_v, unsigned int));
                                        break;
                                default:
                                        size += _putchar('%');
                                        size += _putchar(c);
                                        break;
		}
	}
	else
	{
		size += _putchar(format[i]);
	}
	i++;
	}
	return (size);
}
*/
