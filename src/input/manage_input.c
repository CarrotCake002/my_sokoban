/*
** EPITECH PROJECT, 2021
** manage_input.c
** File description:
** function to manage the keyboard input
*/

#include "sokoban.h"

char **manage_input(int ch, char **map, char *map_str, sokoban_t *skban)
{
    if (ch == SPACE) {
        skban->player->pos = skban->player->pos_cpy;
        free_map(map, skban->map->length);
        map = my_str_to_word_array(map_str, map);
    }
    if (ch == 5)
        move_right(map, skban);
    if (ch == 2)
        move_down(map, skban);
    if (ch == 4)
        move_left(map, skban);
    if (ch == 3)
        move_up(map, skban);
    return (map);
}