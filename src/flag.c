/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/
#include "../include/my.h"

void	flag_S(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 8) {
			my_putstr("/00");
			putnbr_base(str[i],"01234567");
		}
		else if (str[i] < 32) {
			my_putstr("/0");
			putnbr_base(str[i],"01234567");
		}
		my_putchar(str[i]);
		i++;
	}
}

void	flag_p(int *a, int bool)
{
	int b = &a;
	if (bool == 1) {
		my_putstr("0x7ffe");
		putnbr_base(b,"0123456789abcdef");
	}
}
