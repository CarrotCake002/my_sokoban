/*
** EPITECH PROJECT, 2021
** fill_map.c
** File description:
** functions to fill the variable 'map'
*/

#include "sokoban.h"

char *fill_map(int fd, char *map, int size)
{
    map = malloc(sizeof(char) * (size + 1));
    if (!map)
        return (NULL);
    if (read(fd, map, size) == -1)
        return (NULL);
    map[size] = '\0';
    return (map);
}