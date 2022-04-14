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
int input(char *str, char *map, int rule);
int endgame(char *map, int rule);
char *force(char *str);
void loop_char(int *z, char *map, char c);
void loop_str(char *str, char *answer, int *s, int *z);
char *play(char *str, char *map);
char *ia(char *map, char *str, int rule);
int winning(char *map, int rule);
int player_turn(char *map, char *resp, int rule);
int ia_turn(char *map, char *resp, int rule);
