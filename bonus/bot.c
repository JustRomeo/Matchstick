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

    printf("\t\tOK\n[BOT]\tplaying...");
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
        b ++;
    }
    return (map);
}

int choice(char *str, char *map)
{
    rm = 0;
    if (rest > max)
        rm = my_getnbr(str);
    if (rest == max * 2)
        rm = max - 2;
    if (rest <= max)
        rm = rest - 1;
    if (rm < 0)
        rm = 0;
    return (0);
    rm = 0;
}

char *ia(char *map, char *str, int rule)
{
    int z = 0;
    int l = 0;
    int n = 0;

    max = rule;
    line = 0;
    printf("\tOK\n[BOT]\tchecking map...");
    counter(map);
    printf("\t\tOK\n[BOT]\tchecking stick to remove...");
    choice(str, map);
    printf("\t\t\tOK\n[BOT]\tStarting to calcul...");
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
    return (map);
}
