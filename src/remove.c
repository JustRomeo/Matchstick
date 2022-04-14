/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** remove.c
*/

#include "include/prototype.h"

static int t = 1;

int wrong_arg(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < 47 || str[a] > 57 && str[a] != 32 && str[a] != 10) {
            write(2, "Error: invalid input (positive number expected)\n", 48);
            return (84);
        }
        a ++;
    }
    return (0);
}

int input_line(char *str, char *map, int max_l)
{
    if (wrong_arg(str) == 84)
        return (84);
    if (bad_line(str, map, max_l) == 84)
        return (84);
    return (0);
}

int input_stick(char *str, char *map, int rule)
{
    if (wrong_arg(str) == 84)
        return (84);
    if (bad_stick(str, map, rule) == 84)
        return (84);
    return (0);
}
