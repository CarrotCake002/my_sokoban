/*
** EPITECH PROJECT, 2021
** main_loop.c
** File description:
** main loop for the game
*/

#include "sokoban.h"

int main_loop(char **map, char *map_str)
{
    sokoban_t *skban = malloc(sizeof(sokoban_t));
    char **menu = NULL;
    int end = 0;

    if (!skban)
        return (ERROR);
    skban->free_it = false;
    skban->obj = get_obj(map, skban->obj);
    if (!skban->obj)
        return (ERROR);
    keypad(initscr(), TRUE);
    if (main_menu_loop(skban, menu) != 2)
        return (LOSE);
    end = game_loop(map, map_str, skban);
    skban->free_it = true;
    if (end != ERROR)
        end = end_menu_loop(end, map, map_str, skban);
    free_all(skban, map);
    free(skban);
    return (end);
}