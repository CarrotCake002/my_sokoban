/*
** EPITECH PROJECT, 2021
** main_loop.c
** File description:
** main loop for the game
*/

#include "sokoban.h"

int main_loop(char **map, char *map_str)
{
    int ch = 0;
    int end = 2;
    sokoban_t *skban = NULL;

    skban = init_skban(skban, map);
    while (map != NULL) {
        skban = give_mappos(skban, map);
        if (!skban)
            return (ERROR);
        map = show_visual(skban, map, map_str, ch);
        if (map != NULL)
            end = check_win_lose(map, skban);
        if (end != CONTINUE) {
            free_map(map, skban->map->length);
            free_struct(skban);
            free(skban);
            return (end);
        }
    }
    free_map(map, skban->map->length);
    free_struct(skban);
    free(skban);
    return (ERROR);
}