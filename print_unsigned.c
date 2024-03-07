#include "main.h"
/**
 * print_unsigned - print interger
 * @args: paremeter argument to print
 * Return: number of printed char
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	j = j / 10;
	num = j;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		j = -j;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = j;
		while (exp >0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
