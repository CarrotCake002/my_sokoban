/*
** EPITECH PROJECT, 2021
** check_map_screen_dim.c
** File description:
** function to check if the map fits in the screen
*/

#include "sokoban.h"

bool check_map_screen_dim(map_t *map, win_t *win)
{
    if (map->width > win->size.x || map->length > win->size.y) {
        clear();
        printw("The window is too small !");
        printw("Enlarge the terminal to play.");
        return (false);
    }
    return (true);
}