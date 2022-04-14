/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** Error.c
*/

#include "prototype.h"

static int cl = 0;
static int cs = 0;

int bad_stick(char *str, char *map, int rule)
{
    int line = my_getnbr(str);
    int nbr = my_getnbr(my_revstr(str));
    int max_l = 5;

    cs = nbr;
    if (nbr > rule) {
        write(2, "Error: you cannot remove more than ", 35);
        my_put_nbr(rule);
        write(2, " matches per turn\n", 18);
        return (84);
    }
    if (nbr < 1) {
        write(2, "Error: you have to remove at least one match\n", 45);
        return (84);
    }
    return (0);
}

int bad_line(char *str, char *map, int rule)
{
    int line = my_getnbr(str);
    int nbr = my_getnbr(my_revstr(str));

    cl = line;
    if (line > rule) {
        write(2, "Error: this line is out of range\n", 33);
        return (84);
    }
    return (0);
}

int posmo(char *map)
{
    int l = 0;
    int c = 0;
    int n = 0;

    while (l != cl) {
        c ++;
        if (map[c] == '\n')
            l ++;
    }
    c ++;
    while (map[c] != '\n') {
        if (map[c] == '|')
            n ++;
        c ++;
    }
    if (n < cs) {
        write(2, "Error: not enough matches on this line\n", 39);
        return (84);
    }
    return (0);
}

int all_error(int ac, char **argv)
{
    int r = 0;
    int y = 1;

    if (ac < 3)
        return (84);
    while (argv[y][r] && y != ac) {
        if (argv[y][r] < 48 || argv[y][r] > 57) {
            write(2, "Error : Bad Input\n", 18);
            return (84);
        }
        r ++;
        if (argv[y][r] == '\0')
            y ++;
    }
}
