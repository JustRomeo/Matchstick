/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** tools.c
*/

#include "include/prototype.h"

void loop_str(char *str, char *answer, int *s, int *z)
{
    while (str[*s] < 47 || str[*s] > 58)
        (*s) ++;
    while (str[*s] > 46 && str[*s] < 59) {
        answer[*z] = str[*s];
        (*z) ++;
        (*s) ++;
    }
}

char *sentence(char *str, char *resp)
{
    my_putstr(str);
    resp = get_next_line(0);
    return (resp);
}
