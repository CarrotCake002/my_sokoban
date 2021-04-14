/*
** EPITECH PROJECT, 2021
** get_plyerpos.c
** File description:
** function to get the position of the player
*/

#include "sokoban.h"

player_t *get_plyerpos(char **map, player_t *plyer, bool free_it)
{
    if (free_it == true)
        free(plyer);
    plyer = malloc(sizeof(player_t));
    if (!plyer)
        return (NULL);
    plyer->pos.x = 0;
    plyer->pos.y = 0;
    while (map[plyer->pos.y][plyer->pos.x] != 'P') {
        plyer->pos.x++;
        if (map[plyer->pos.y][plyer->pos.x] == '\0') {
            plyer->pos.x = 0;
            plyer->pos.y++;
        }
    }
    plyer->pos_cpy.x = plyer->pos.x;
    plyer->pos_cpy.y = plyer->pos.y;
    return (plyer);
}