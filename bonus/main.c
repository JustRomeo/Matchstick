/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** main.c
*/

#include "prototype.h"

int main(int ac, char **argv)
{
    int line = my_getnbr(argv[1]);
    int rule = my_getnbr(argv[2]);
    char *map = malloc(sizeof(char) * (line * line));
    char *resp = get_next_line(0);

    map = init_map(line, map);
    while (endgame(map, rule) != 0) {
        if (player_turn(map, resp, rule) == 1)
            return (0);
        if (ia_turn(map, resp, rule) == 1)
            return (0);
    }
    return (0);
}
