/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** print.c
*/

#include "include/prototype.h"

int print(char *resp_s, char *resp_l)
{
    write(1, "Player removed ", 15);
    write(1, resp_s, my_strlen(resp_s));
    write(1, " match(es) from line ", 21);
    write(1, resp_l, my_strlen(resp_l));
    write(1, "\n", 1);
}

int print_ia(int line, int rm)
{
    line ++;
    write(1, "AI removed ", 11);
    my_put_nbr(rm);
    write(1, " match(es) from line ", 21);
    my_put_nbr(line);
    write(1, "\n", 1);
}
