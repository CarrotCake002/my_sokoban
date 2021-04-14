/*
** EPITECH PROJECT, 2021
** check_boxes_objs.c
** File description:
** function to check if there's the same number of boxes and objectives
*/

#include "sokoban.h"

bool check_boxes_objs(char *map)
{
    int i = 0;
    int cnt_boxes = 0;
    int cnt_objs = 0;

    while (map[i] != '\0') {
        if (map[i] == BOX)
            cnt_boxes++;
        if (map[i] == OBJ)
            cnt_objs++;
        i++;
    }
    if (cnt_boxes != cnt_objs)
        return (false);
    return (true);
}