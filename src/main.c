/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** main.c
*/

#include "prototype.h"

int main(int ac, char **argv)
{
    int line = 0;
    int rule = 0;
    char *map = malloc(sizeof(char) * 10000);
    char *resp_l = "\0";
    char *resp_s = "\0";

    if (all_error(ac, argv) == 84)
        return (84);
    line = my_getnbr(argv[1]);
    rule = my_getnbr(argv[2]);
    rules_are(line, rule);
    map = init_map(line, map);
    while (endgame(map, rule) != 0) {
        if (player_turn(map, resp_l, resp_s) == 1)
            return (1);
        if (ia_turn(map, resp_l, resp_s) == 2)
            return (2);
    }
    return (0);
}
