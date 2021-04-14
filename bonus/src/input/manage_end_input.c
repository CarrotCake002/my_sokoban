/*
** EPITECH PROJECT, 2021
** manage_end_input.c
** File description:
** function to manage the keyboard input for the end menu
*/

#include "sokoban.h"

int manage_end_input(int end, char ch, char **menu, sokoban_t *skban)
{
    if (end == WIN) {
        mvprintw(skban->win->size.x / 2 - 5, skban->win->size.y / 2 - 10,
            "YOU WON THE GAME !\n");
    } else {
        mvprintw(skban->win->size.x / 2 - 5, skban->win->size.y / 2 - 10,
            "YOU LOST THE GAME !\n");
    }
    mvprintw(skban->win->size.x / 2, skban->win->size.y / 2 - 3, "Restart");
    mvprintw(skban->win->size.x / 2 + 1, skban->win->size.y / 2 - 3,
        "Exit game");
    manage_menu_key(ch, menu);
    display_cursor(menu, skban);
    return (manage_result(ch, menu));
}