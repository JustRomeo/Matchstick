/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** Playing.c
*/

#include "include/prototype.h"

static int rule = 0;
static int max_l = 0;

int rules_are(int line, int sticks)
{
    rule = sticks;
    max_l = line;
}

int player_turn(char *map, char *resp_l, char *resp_s)
{
    my_printf("%s\nYour turn:\n", map);
    resp_l = sentence("Line: ", resp_l);
    if (resp_l == NULL)
        return (0);
    while (input_line(resp_l, map, max_l) != 0  || posmo(map) != 0)
        resp_l = sentence("Line: ", resp_l);
    resp_s = sentence("Matches: ", resp_s);
    while (input_stick(resp_s, map, rule) != 0 || posmo(map) != 0)
        resp_s = sentence("Matches: ", resp_s);
    map = play(resp_l, resp_s, map);
    print(resp_s, resp_l);
    if (winning(map, rule) == 1) {
        my_printf("\e[92m\e[1mThe player won\n\e[0m%s\n", map);
        return (1);
    }
    return (0);
}

int ia_turn(char *map, char *resp_l, char *resp_s)
{
    my_printf("%s\nIA is playing ...\n", map);
    map = ia(map, resp_l, resp_s, rule);
    if (winning(map, rule) == 1) {
        my_printf("\e[91m\e[1mThe IA won\n\e[0m%s\n", map);
        return (2);
    }
    return (0);
}

char *play(char *resp_l, char *resp_s, char *map)
{
    int a = 0;
    int b = 1;
    int line = my_getnbr(resp_l);
    int rm = my_getnbr(resp_s);

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
