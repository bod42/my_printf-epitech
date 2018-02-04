/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#include <stdlib.h>
#include "../include/my.h"

int	my_printf_flag(char *str, va_list ap, int i)
{
	int bool = 0;

	switch (str[i + 1]) {
	case 'c':
		my_putchar(va_arg(ap, int));
		break;
	case 'd':
	case 'i':
	case 'h':
		my_put_nbr(va_arg(ap, int));
		break;
	case 'o':
		putnbr_base(va_arg(ap, int), "01234567");
		break;
	case 'p':
		flag_p(va_arg(ap, void *), (bool + 1));
		break;
	default:
		my_printf_flag2(str, ap, i);
	}
	return (0);
}

int	my_printf_flag2(char *str, va_list ap, int i)
{
	switch (str[i + 1]) {
	case 'l':
		my_put_long(va_arg(ap, long));
		break;
	case 'x':
		putnbr_base(va_arg(ap, int), "0123456789abcdef");
		break;
	case 'X':
		putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
		break;
	case 'u':
		my_put_nbr(va_arg(ap, unsigned int));
		break;
	case '%':
		my_putchar('%');
		break;
	default:
		my_printf_flag3(str, ap, i);
	}
	return (0);
}

int	my_printf_flag3(char *str, va_list ap, int i)
{
	switch (str[i + 1]) {
	case 's':
		my_putstr(va_arg(ap, char *));
		break;
	case 'S':
		flag_S(va_arg(ap, char *));
		break;
	case 'b':
		putnbr_base(va_arg(ap, int), "01");
		break;
	default:
		my_putchar(va_arg(ap, int));
	}
	return (0);
}

int	my_printf(char *str, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, str);
	while (str[i] != '\0') {
		if (str[i] != '%')
		my_putchar(str[i]);
		if (str[i] == '%') {
			my_printf_flag(str, ap, i);
			i = i + 1;
		}
		if (str[i] == '\0')
			return (0);
		i++;
	}
	va_end(ap);
	return (0);
}
