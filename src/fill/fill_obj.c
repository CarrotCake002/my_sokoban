/*
** EPITECH PROJECT, 2021
** fill_obj.c
** File description:
** functions to fill the obj structure
*/

#include "sokoban.h"

obj_t fill_singleobj(int y, int x, obj_t obj)
{
    obj.pos.x = x;
    obj.pos.y = y;
    return (obj);
}

int look_row(char **map, int y, obj_t *obj, int i)
{
    int x = 0;

    while (map[y][x] != '\0') {
        x++;
        if (map[y][x] == 'O') {
            obj[i] = fill_singleobj(y, x, obj[i]);
            i++;
        }
    }
    return (i);
}

obj_t *fill_allobj(obj_t *obj, char **map)
{
    int y = 0;
    int i = 0;

    while (map[y] != NULL) {
            i = look_row(map, y, obj, i);
        y++;
    }
    return (obj);
}