/*
** EPITECH PROJECT, 2021
** win_info.c
** File description:
** functions to get important info from the window
*/

#include "sokoban.h"

win_t *get_winsize(win_t *win, bool free_it)
{
    if (free_it == true)
        free(win);
    win = malloc(sizeof(win_t));
    if (!win)
        return (NULL);
    getmaxyx(stdscr, win->size.x, win->size.y);
    return (win);
}