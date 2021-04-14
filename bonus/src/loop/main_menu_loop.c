/*
** EPITECH PROJECT, 2021
** main_menu_loop.c
** File description:
** function for the menu when launching the game
*/

#include "sokoban.h"

int main_menu_loop(sokoban_t *skban, char **menu)
{
    char ch = '\0';

    skban->win = get_winsize(skban->win, skban->free_it);
    menu = init_menu(menu, skban->free_it);
    if (!menu)
        return (ERROR);
    while (manage_main_input(ch, menu, skban) != LOSE) {
        clear();
        if (manage_main_input(ch, menu, skban) == CONTINUE) {
            free_menu(menu);
            return (CONTINUE);
        }
        refresh();
        ch = getch();
    }
    free_menu(menu);
    return (0);
}