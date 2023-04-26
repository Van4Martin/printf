#include "main.h"
#include "string.h"


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
                                size += _putchar((char)va_arg(args, int));
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
                                        size += printint(va_arg(args, unsigned int));
                                        break;
                                default:
                                        size += _putchar('%');
                                        size += _putchar(format[i]);
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
