/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** map.c
*/

#include "include/prototype.h"

static int l = 0;

void print_my_map(int *loop, char *map, int *z, int *stick)
{
    int bcp = (*loop);

    while ((*loop) != 0) {
        map[l] = '*';
        l ++;
        (*z) --;
        loop_char(z, map, ' ');
        (*z) = (*stick);
        loop_char(z, map, '|');
        (*z) = bcp;
        loop_char(z, map, ' ');
        map[l - 1] = '*';
        (*stick) += 2;
        (*loop) --;
        map[l] = '\n';
        l ++;
        bcp --;
        (*z) = bcp;
    }
}

void loop_char(int *z, char *map, char c)
{
    while (*z != 0) {
        map[l] = c;
        l ++;
        (*z) --;
    }
}

char *init_map(int line, char *map)
{
    int bcp = line;
    int z = line * 2 + 1;
    int loop = line;
    int stick = 1;

    l = 0;
    loop_char(&z, map, '*');
    z = line;
    map[l] = '\n';
    l ++;
    print_my_map(&loop, map, &z, &stick);
    z = line * 2 + 1;
    loop_char(&z, map, '*');
    return (map);
}

int endgame(char *map, int rule)
{
    int o = 0;
    int n = 0;

    while (map[o] != '\0') {
        if (map[o] == '|')
            n ++;
        o ++;
    }
    return (n);
}

int winning(char *map, int rule)
{
    int o = 0;
    int n = 0;

    while (map[o] != '\0') {
        if (map[o] == '|')
            n ++;
        o ++;
    }
    if (n == 1)
        return (1);
    return (0);
}
