#include "main.h"

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	char buf[32];
	int i = 0;
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		count++;
		return count;
	}
	while (n > 0)
	{
		buf[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
	{
		_putchar(buf[i]);
		count++;
	}
	return count;
}

int main(void){
int len;
int len2;

len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
return 0;
}
