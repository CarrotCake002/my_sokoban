/*
** EPITECH PROJECT, 2021
** manage_main_input.c
** File description:
** manage the input for the main menu
*/

#include "sokoban.h"

int manage_main_input(char ch, char **menu, sokoban_t *skban)
{
    mvprintw(skban->win->size.x / 2 - 5, skban->win->size.y / 2 - 10,
        "WELCOME TO MY_SOKOBAN !\n");
    mvprintw(skban->win->size.x / 2 - 4, skban->win->size.y / 2 - 10,
        "(press SPACE to select)\n");
    mvprintw(skban->win->size.x / 2, skban->win->size.y / 2 - 3, "Play");
    mvprintw(skban->win->size.x / 2 + 1, skban->win->size.y / 2 - 3,
        "Exit game");
    manage_menu_key(ch, menu);
    display_cursor(menu, skban);
    manage_result(ch, menu);
    return (manage_result(ch, menu));
}