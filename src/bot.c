/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** BOT.c
*/

#include "prototype.h"

static int line = 0;
static int rm = 0;
static int rest = 0;
static int max = 0;

int counter(char *map)
{
    int o = 0;

    rest = 0;
    while (map[o] != '\0') {
        if (map[o] == '|')
            rest ++;
        o ++;
    }
    return (0);
}

char *playia(char *map)
{
    int a = 0;
    int b = 0;

    while (b != line) {
        a ++;
        if (map[a] == '\n')
            b ++;
    }
    b = 0;
    while (map[a] != '|')
        a ++;
    while (b != rm) {
        map[a + b] = ' ';
        while (map[a] != '|')
            a ++;
        b ++;
    }
    return (map);
}

int choice(char *str, char *map)
{
    rm = 0;
    if (rest > max)
        rm = my_getnbr(str);
    if (rest == 5 || rest == 5 && max >= 3)
        rm = 1;
        rm = my_getnbr(str);
    if (rest <= max + 1)
        rm = rest - 1;
    if (rm < 1)
        rm = 1;
    return (0);
}

char *ia(char *map, char *resp_l, char *resp_s, int rule)
{
    int z = 0;
    int l = 0;
    int n = 0;
    char *str = my_strcat(resp_l, resp_s);

    max = rule;
    line = 0;
    counter(map);
    choice(str, map);
    while (map[z] != '\0') {
        if (map[z] == '|')
            n ++;
        if (map[z] == '\n') {
            l ++;
            n = 0;
        }
        z ++;
    }
    playia(map);
    print_ia(line, rm);
    return (map);
}
