/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#include "../include/my.h"

int	my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		my_put_nbr((nb / 10) * -1);
		my_putchar(((nb % 10) * -1) + '0');
	} else {
		if (nb >= 10)
			my_put_nbr(nb / 10);
		my_putchar((nb % 10) + '0');
	}
	return (0);
}

int     my_put_long(long nb)
{
	if (nb < 0) {
		my_putchar('-');
		my_put_nbr((nb / 10) * -1);
		my_putchar(((nb % 10) * -1) + '0');
	} else {
		if (nb >= 10)
			my_put_nbr(nb / 10);
		my_putchar((nb % 10) + '0');
	}
	return (0);
}

int     my_put_short(short int nb)
{
	if (nb < 0) {
		my_putchar('-');
		my_put_nbr((nb / 10) * -1);
		my_putchar(((nb % 10) * -1) + '0');
	} else {
		if (nb >= 10)
			my_put_nbr(nb / 10);
		my_putchar((nb % 10) + '0');
	}
	return (0);
}

