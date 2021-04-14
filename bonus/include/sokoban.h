/*
** EPITECH PROJECT, 2021
** minishell.h
** File description:
** header of the minishell program
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ncurses.h>
#include "../lib/my/include/my_call_lib_functions.h"

#define ERROR 84
#define ESC 27
#define WIN 0
#define LOSE 1
#define CONTINUE 2
#define SPACE ' '
#define WALL '#'
#define BOX 'X'
#define OBJ 'O'
#define PLAYER 'P'
#define CURSOR '>'

typedef struct position_s {
    int x;
    int y;
} position_t;

typedef struct score_s {
    int moves;
} score_t;

typedef struct player_s {
    position_t pos;
    position_t pos_cpy;
    score_t *score;
} player_t;

typedef struct map_s {
    int length;
    int width;
    position_t pos;
} map_t;

typedef struct obj_s {
    position_t pos;
    int count;
} obj_t;

typedef struct win_s {
    position_t size;
} win_t;

typedef struct sokoban_s {
    player_t *player;
    map_t *map;
    obj_t *obj;
    win_t *win;
    bool free_it;
} sokoban_t;

int sokoban(int ac, char **av);
int error_handling(char *map);
int check_args(int ac, char **av);
void usage(void);
bool check_chars(char *map);
bool check_player_exist(char *map);
bool check_boxes_objs(char *map);
char *init_all(char **av);
score_t *init_score(score_t *score);
char *create_map(char *map, char *filepath);
char *fill_map(int fd, char *map, int size);
obj_t *fill_allobj(obj_t *obj, char **map);
int main_loop(char **map, char *map_str);
sokoban_t *give_mappos(sokoban_t *skban, char **map);
win_t *get_winsize(win_t *win, bool free_it);
map_t *get_mapdim(sokoban_t *skban, char **map);
position_t get_mappos(map_t *map, win_t *win);
player_t *get_plyerpos(char **map, player_t *plyer, bool free_it);
obj_t *get_obj(char **map, obj_t *obj);
void display_map(char **map, sokoban_t *skban);
char get_charinput(void);
char **manage_input(int ch, char **map, char *map_str, sokoban_t *skban);
char **move_up(char **map, player_t *plyr, obj_t *obj);
char **move_down(char **map, player_t *plyr, obj_t *obj);
char **move_left(char **map, player_t *plyr, obj_t *obj);
char **move_right(char **map, player_t *plyr, obj_t *obj);
bool check_map_screen_dim(map_t *map, win_t *win);
char **show_visual(sokoban_t *skban, char **map, char *map_str, char ch);
bool check_ifo(int x, int y, obj_t *obj);
int check_win_lose(char **map, sokoban_t *skban);
bool check_win_condition(char **map, sokoban_t *skban);
bool check_lose_condition(char **map, sokoban_t *skban);
int check_down_left(char **map, int x, int y);
int check_left_up(char **map, int x, int y);
int check_up_right(char **map, int x, int y);
int check_right_down(char **map, int x, int y);
void init_colors(void);
int manage_menu(sokoban_t *skban);
int manage_pause_input(char ch, char **menu, sokoban_t *skban);
char **init_menu(char **menu, bool free_it);
void free_menu(char **menu);
void display_result_message(int result);
int game_loop(char **map, char *map_str, sokoban_t *skban);
int main_menu_loop(sokoban_t *skban, char **menu);
int manage_main_input(char ch, char **menu, sokoban_t *skban);
int manage_result(char ch, char **menu);
char **manage_menu_key(char ch, char **menu);
void display_cursor(char **menu, sokoban_t *skban);
int end_menu_loop(int end, char **map, char *map_str, sokoban_t *skban);
int manage_end_input(int end, char ch, char **menu, sokoban_t *skban);
void free_struct(sokoban_t *skban);
void free_map(char **map, int height);
void free_all(sokoban_t *skban, char **map);

#endif /* !SOKOBAN_H_ */