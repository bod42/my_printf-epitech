/*
** EPITECH PROJECT, 2017
** c code
** File description:
** printf
*/

#include "../include/my.h"

int	my_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0') {
		i++;
	}
	return (i);
}
