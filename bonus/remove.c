/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** remove.c
*/

#include "include/prototype.h"

static int t = 1;

int time_to_play(char *str, char *map, int rule)
{
    int line = my_getnbr(my_revstr(str));
    int nbr = my_getnbr(str);

    if (nbr > rule)
        return (84);
    printf("retiront %d alumette(s) à la %d° ligne\n", nbr, line);
    return (0);
}

int wrong_arg(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < 47 && str[a] > 57 && str[a] != 32)
            return (84);
        a ++;
    }
    return (0);
}

int input(char *str, char *map, int rule)
{
    if (wrong_arg(str) == 84)
        return (84);
    if (time_to_play(str, map, rule) == 84)
        return (84);
    return (0);
}
