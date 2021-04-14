/*
** EPITECH PROJECT, 2021
** display_map.c
** File description:
** function to display the whole map in its position
*/

#include "sokoban.h"

void display_rows(char **map, int y, sokoban_t *skban)
{
    int x = 0;

    init_colors();
    while (map[y][x] != '\0') {
        if (map[y][x] == BOX) {
            attron(COLOR_PAIR(3));
            mvprintw(skban->map->pos.x + y, skban->map->pos.y + x, "%c", BOX);
            attroff(COLOR_PAIR(3));
        } else if (map[y][x] == OBJ) {
            attron(COLOR_PAIR(2));
            mvprintw(skban->map->pos.x + y, skban->map->pos.y + x, "%c", OBJ);
            attroff(COLOR_PAIR(2));
        } else if (map[y][x] == PLAYER) {
            attron(COLOR_PAIR(1));
            mvprintw(skban->map->pos.x + y, skban->map->pos.y + x,
                "%c", PLAYER);
            attroff(COLOR_PAIR(1));
        }else {
            mvprintw(skban->map->pos.x + y,
                skban->map->pos.y + x, "%c", map[y][x]);
        }
        x++;
    }
}

void display_with_colors(char **map, int y, sokoban_t *skban)
{
    while (map[y] != NULL) {
        start_color();
        display_rows(map, y, skban);
        y++;
    }
}

void display_map(char **map, sokoban_t *skban)
{
    int y = 0;

    if (!has_colors()) {
        while (map[y] != NULL) {
            mvprintw(skban->map->pos.x + y, skban->map->pos.y, map[y]);
            y++;
        }
    } else
        display_with_colors(map, y, skban);
    mvprintw(0, 0, "Score: %d", skban->player->score->moves);
}