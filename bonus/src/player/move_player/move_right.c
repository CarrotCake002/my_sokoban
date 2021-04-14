/*
** EPITECH PROJECT, 2021
** move_right.c
** File description:
** function to move the player right
*/

#include "sokoban.h"

char **move_right(char **map, player_t *plyr, obj_t *obj)
{
    if (map[plyr->pos.y][plyr->pos.x + 1] != '#'
        && map[plyr->pos.y][plyr->pos.x + 1] != '\0') {
        if ((map[plyr->pos.y][plyr->pos.x + 2] != WALL
            && map[plyr->pos.y][plyr->pos.x + 2] != BOX)
            && map[plyr->pos.y][plyr->pos.x + 1] == BOX
            && map[plyr->pos.y][plyr->pos.x + 2] != '\0') {
            map[plyr->pos.y][plyr->pos.x + 2] =
                map[plyr->pos.y][plyr->pos.x + 1];
            map[plyr->pos.y][plyr->pos.x + 1] = SPACE;
        }
        if (map[plyr->pos.y][plyr->pos.x + 1] !=
            WALL && map[plyr->pos.y][plyr->pos.x + 1] != BOX) {
            map[plyr->pos.y][plyr->pos.x + 1] = map[plyr->pos.y][plyr->pos.x];
            map[plyr->pos.y][plyr->pos.x] = SPACE;
            plyr->pos.x += 1;
        }
        if (check_ifo(plyr->pos.x - 1, plyr->pos.y, obj) == true)
            map[plyr->pos.y][plyr->pos.x - 1] = OBJ;
        plyr->score->moves++;
    }
    return (map);
}