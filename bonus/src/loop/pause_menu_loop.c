/*
** EPITECH PROJECT, 2021
** manage_menu.c
** File description:
** function to manage the whole menu
*/

#include "sokoban.h"

int manage_menu(sokoban_t *skban)
{
    char ch = '\0';
    char **menu = NULL;

    menu = init_menu(menu, skban->free_it);
    if (!menu)
        return (ERROR);
    while (manage_pause_input(ch, menu, skban) != LOSE) {
        clear();
        if (manage_pause_input(ch, menu, skban) == CONTINUE)
            return (CONTINUE);
        refresh();
        ch = getch();
    }
    return (LOSE);
}