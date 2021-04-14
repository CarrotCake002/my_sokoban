/*
** EPITECH PROJECT, 2021
** create_map.c
** File description:
** function to get the map from the second arg
*/

#include "sokoban.h"

int get_mapsize(char *filepath)
{
    struct stat sb;

    if (stat(filepath, &sb) == -1)
        return (-1);
    return (sb.st_size);
}

char *create_map(char *map, char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size = get_mapsize(filepath);

    if (fd == -1)
        return (NULL);
    if (size <= 0)
        return (NULL);
    map = fill_map(fd, map, size);
    if (!map)
        return (NULL);
    return (map);
}