/*
** EPITECH PROJECT, 2021
** init_all.c
** File description:
** function to init all needed
*/

#include "sokoban.h"

char *init_all(char **av)
{
    char *map = NULL;

    map = create_map(map, av[1]);
    if (!map)
        return (NULL);
    return (map);
}