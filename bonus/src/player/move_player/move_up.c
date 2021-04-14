/*
** EPITECH PROJECT, 2021
** move_up.c
** File description:
** function to move the player up
*/

#include "sokoban.h"

char **move_up(char **map, player_t *plyr, obj_t *obj)
{
    if (map[plyr->pos.y - 1][plyr->pos.x] != '#' && plyr->pos.y != 1) {
        if ((map[plyr->pos.y - 2][plyr->pos.x] != WALL
            && map[plyr->pos.y - 2][plyr->pos.x] != BOX)
            && map[plyr->pos.y - 1][plyr->pos.x] == BOX
            && plyr->pos.y - 1 != 1) {
            map[plyr->pos.y - 2][plyr->pos.x] =
                map[plyr->pos.y - 1][plyr->pos.x];
            map[plyr->pos.y - 1][plyr->pos.x] = SPACE;
        }
        if (map[plyr->pos.y - 1][plyr->pos.x] != WALL
            && map[plyr->pos.y - 1][plyr->pos.x] != BOX) {
            map[plyr->pos.y - 1][plyr->pos.x] = map[plyr->pos.y][plyr->pos.x];
            map[plyr->pos.y][plyr->pos.x] = SPACE;
            plyr->pos.y -= 1;
        }
        if (check_ifo(plyr->pos.x, plyr->pos.y + 1, obj) == true)
            map[plyr->pos.y + 1][plyr->pos.x] = OBJ;
        plyr->score->moves++;
    }
    return (map);
}