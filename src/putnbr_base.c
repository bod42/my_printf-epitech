/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#include "../include/my.h"

int	putnbr_base(long int nbr, char *base)
{
	int len = my_strlen(base);
	int result = 0;

	if (nbr == 0)
		my_putchar(base[0]);
	if (nbr > 0) {
		result = nbr % len;
		if ((nbr / len) != 0 )
			putnbr_base((nbr / len), base);
		my_putchar(base[result]);
	}
	return (0);
}
