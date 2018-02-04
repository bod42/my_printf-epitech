/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#include "../include/my.h"

int	my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
	return (0);
}
