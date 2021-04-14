/*
** EPITECH PROJECT, 2021
** get_mapdim.c
** File description:
** function to get the dimension of the map
*/

#include "sokoban.h"

map_t *get_mapdim(sokoban_t *skban, char **map)
{
    if (skban->free_it == true)
        free(skban->map);
    skban->map = malloc(sizeof(map_t));
    if (!skban->map)
        return (NULL);
    skban->map->length = my_strlen_to_endline(map[0], 0);
    skban->map->width = 0;
    while (map[skban->map->width] != NULL)
        skban->map->width++;
    return (skban->map);
}