/*
** EPITECH PROJECT, 2018
** prototype.h
** File description:
** HEADER
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *init_map(int line, char *map);
int input_line(char *str, char *map, int max_l);
int input_stick(char *str, char *map, int rule);
int endgame(char *map, int rule);
char *force(char *str);
void loop_char(int *z, char *map, char c);
void loop_str(char *str, char *answer, int *s, int *z);
char *play(char *resp_l, char *resp_s, char *map);
char *ia(char *map, char *resp_l, char *resp_s, int rule);
int winning(char *map, int rule);
int player_turn(char *map, char *resp_l, char *resp_s);
int ia_turn(char *map, char *resp_l, char *resp_s);
int print(char *resp_s, char *resp_l);
int print_ia(int line, int rm);
int bad_stick(char *str, char *map, int rule);
int bad_line(char *str, char *map, int rule);
int rules_are(int line, int sticks);
int posmo(char *map);
int all_error(int ac, char **argv);
char *sentence(char *str, char *resp);
