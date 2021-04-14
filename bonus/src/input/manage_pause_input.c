/*
** EPITECH PROJECT, 2021
** manage_menu_input.c
** File description:
** functions to manage the input of the menu
*/

#include "sokoban.h"

void display_cursor(char **menu, sokoban_t *skban)
{
    mvprintw(skban->win->size.x / 2, skban->win->size.y / 2 - 5, menu[0]);
    mvprintw(skban->win->size.x / 2 + 1, skban->win->size.y / 2 - 5, menu[1]);
}

char **manage_menu_key(char ch, char **menu)
{
    char temp = '\0';

    if (ch == 2 && menu[0][0] == CURSOR) {
        temp = menu[0][0];
        menu[0][0] = menu[1][0];
        menu[1][0] = temp;
    }
    if (ch == 3 && menu[1][0] == CURSOR) {
        temp = menu[0][0];
        menu[0][0] = menu[1][0];
        menu[1][0] = temp;
    }
    return (menu);
}

int manage_result(char ch, char **menu)
{
    if (ch == SPACE && menu[0][0] == CURSOR)
        return (CONTINUE);
    if (ch == SPACE && menu[1][0] == CURSOR)
        return (LOSE);
    return (0);
}

int manage_pause_input(char ch, char **menu, sokoban_t *skban)
{

    mvprintw(skban->win->size.x / 2 - 5, skban->win->size.y / 2 - 2, "PAUSED");
    attron(COLOR_PAIR(3));
    mvprintw(skban->win->size.x / 2, skban->win->size.y / 2 - 3, "Continue");
    attroff(COLOR_PAIR(3));
    attron(COLOR_PAIR(2));
    mvprintw(skban->win->size.x / 2 + 1, skban->win->size.y / 2 - 3,
        "Leave game");
    attroff(COLOR_PAIR(2));
    manage_menu_key(ch, menu);
    display_cursor(menu, skban);
    return (manage_result(ch, menu));
}