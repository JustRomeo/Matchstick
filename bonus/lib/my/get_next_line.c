/*
** EPITECH PROJECT, 2018
** my_getnextline.c
** File description:
** HEADER
*/

#include "../../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

static char reste[100];

int checker(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] == '\n' || str[a] == '\0')
            return (a);
        a ++;
    }
    return (0);
}

void back_up(char *str)
{
    int c = 0;
    int s = 0;
    int l = 0;

    s = checker(str) + 1;
    l = s - 1;
    while (str[s] != '\0' && str[s] != '\n') {
        reste[c] = str[s];
        c ++;
        s ++;
    }
    reste[c] = str[s];
    s ++;
    c ++;
    reste[c + 1] = '\0';
    str[l] = '\0';
}

char *get_next_line(int fd)
{
    int a = 0;
    char *str = malloc(sizeof(char) * 20000);
    char *temp = malloc(sizeof(char) * READ_SIZE + 1);
    int reader;

    if (my_strlen(reste) != 0)
        str = my_strcat(str, reste);
    reste[0] = '\0';
    while (*temp != '\n') {
        reader = read(fd, temp, READ_SIZE);
        str = my_strcat(str, temp);
        if (checker(str) != 0) {
            back_up(str);
            return (str);
        }
        temp ++;
    }
    return (str);
}
