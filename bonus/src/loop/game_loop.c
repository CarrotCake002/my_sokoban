/*
** EPITECH PROJECT, 2021
** game_loop.c
** File description:
** main loop for the game
*/

#include "sokoban.h"

int game_loop(char **map, char *map_str, sokoban_t *skban)
{
    char ch = '\0';
    int end = 0;

    while (map != NULL) {
        skban = give_mappos(skban, map);
        if (!skban)
            return (ERROR);
        skban->free_it = true;
        map = show_visual(skban, map, map_str, ch);
        if (!map)
            return (ERROR);
        end = check_win_lose(map, skban);
        if (end != CONTINUE)
            return (end);
    }
    free_struct(skban);
    return (ERROR);
}