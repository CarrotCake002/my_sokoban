/*
** EPITECH PROJECT, 2021
** check_ifo.c
** File description:
** check if the character behind the player is an O
*/

#include "sokoban.h"

bool check_ifo(int x, int y, obj_t *obj)
{
    int i = 0;

    while (i < obj[0].count) {
        if (x == obj[i].pos.x && y == obj[i].pos.y)
            return (true);
        i++;
    }
    return (false);
}