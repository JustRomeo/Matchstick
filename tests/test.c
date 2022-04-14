/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** gcc test.c -I../include -L../lib/my -lmy --coverage -lcriterion && clear && ./a.out
*/

#include <criterion/redirect.h>
#include <criterion/criterion.h>

#include "my.h"
#include "prototype.h"
#include "get_next_line.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    char *buffer;

    sentence("hello world\n", buffer);
    cr_assert_stdout_eq_str("hello world\n");
}
