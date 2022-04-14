/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** Playing.c
*/

#include "prototype.h"

int player_turn(char *map, char *resp, int rule)
{
    my_printf("%s\nYour turn ...\n", map);
    resp = get_next_line(0);
    //if (input(resp, map, rule) != 0)
    //return (84);
    map = play(resp, map);
    if (winning(map, rule) == 1) {
        my_printf("\e[92m\e[1mThe player won\n\e[0m%s\n", map);
        return (1);
    }
    return (0);
}

int ia_turn(char *map, char *resp, int rule)
{
    my_printf("%s\nIA is playing ...\n", map);
    my_printf("\n[BOT]\twaiting for move ...");
    map = ia(map, resp, rule);
    if (winning(map, rule) == 1) {
        my_printf("\e[91m\e[1mThe IA won\n\e[0m%s\n", map);
        return (1);
    }
    my_printf("\n[BOT]\tyour turn \"boss\" xP\n");
    return (0);
}

char *play(char *str, char *map)
{
    int a = 0;
    int b = 0;
    int line = my_getnbr(str);
    int rm = my_getnbr(my_revstr(str));

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
