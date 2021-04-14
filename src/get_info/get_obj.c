/*
** EPITECH PROJECT, 2021
** get_objpos.c
** File description:
** functions to get the position and nb of objectives ro fill
*/

#include "sokoban.h"

int get_objcount(char **map)
{
    int x = 0;
    int y = 0;
    int count = 0;

    while (map[y] != NULL) {
        while (map[y][x] != '\0') {
            x++;
            if (map[y][x] == 'O')
                count++;
        }
        x = 0;
        y++;
    }
    return (count);
}

obj_t *get_obj(char **map, obj_t *obj)
{
    int count = get_objcount(map);

    obj = malloc(sizeof(obj_t) * count);
    if (!obj)
        return (NULL);
    obj[0].count = count;
    obj = fill_allobj(obj, map);
    return (obj);
}