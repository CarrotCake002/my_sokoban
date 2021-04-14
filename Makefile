##
## EPITECH PROJECT, 2021
## makefile
## File description:
## Makefile to compile
##

LIB_PATH	=	lib/my/src/

SRC_PATH 	=	src/

MAIN 		= 	$(SRC_PATH)main/

GET_INFO 	=	$(SRC_PATH)get_info/

FILL 		= 	$(SRC_PATH)fill/

ERR_HANDL 	=	$(SRC_PATH)error_handling/

INIT 		=	$(SRC_PATH)initiation/

MAP 		= 	$(SRC_PATH)map/

LOOP 		=	$(SRC_PATH)loop/

INPUT 		= 	$(SRC_PATH)input/

PLAYER 		= 	$(SRC_PATH)player/

CHECK 		= 	$(SRC_PATH)check/

VISUAL 		= 	$(SRC_PATH)visual/

FREE 		= 	$(SRC_PATH)free/

NAME   	=    my_sokoban

SRC     =	$(MAIN)main.c 				\
			$(MAIN)sokoban.c 			\
			$(GET_INFO)get_wininfo.c 	\
			$(GET_INFO)get_mapdim.c 	\
			$(GET_INFO)get_mappos.c 	\
			$(GET_INFO)get_charinput.c 	\
			$(GET_INFO)get_plyerpos.c 	\
			$(GET_INFO)get_obj.c 		\
			$(ERR_HANDL)usage.c 		\
			$(ERR_HANDL)error_handling.c\
			$(PLAYER)move_left/move_left.c 	\
			$(PLAYER)move_left/move_boxl.c	\
			$(PLAYER)move_right/move_right.c\
			$(PLAYER)move_right/move_boxr.c \
			$(PLAYER)move_up/move_up.c 		\
			$(PLAYER)move_up/move_boxu.c 	\
			$(PLAYER)move_down/move_down.c 	\
			$(PLAYER)move_down/move_boxd.c 	\
			$(CHECK)check_lose_positions/check_down_left.c 	\
			$(CHECK)check_lose_positions/check_left_up.c 	\
			$(CHECK)check_lose_positions/check_up_right.c 	\
			$(CHECK)check_lose_positions/check_right_down.c \
			$(CHECK)check_boxes_objs.c 			\
			$(CHECK)check_map_screen_dim.c		\
			$(CHECK)check_win_condition.c 		\
			$(CHECK)check_lose_condition.c 		\
			$(CHECK)check_player_exist.c 		\
			$(CHECK)check_nb_args/check_nb_args.c 	\
			$(CHECK)check_ifo.c 		\
			$(CHECK)check_win_lose.c 	\
			$(CHECK)check_chars.c 		\
			$(VISUAL)show_visual.c		\
			$(INIT)init_all.c 			\
			$(INIT)init_skban.c 		\
			$(INPUT)manage_input.c 		\
			$(FILL)fill_map.c 			\
			$(FILL)fill_obj.c 			\
			$(MAP)create_map.c 			\
			$(MAP)give_mappos.c 		\
			$(MAP)display_map.c 		\
			$(LOOP)main_loop.c 			\
			$(FREE)free_all.c 			\
			$(LIB_PATH)my_putchar.c 	\
			$(LIB_PATH)my_putstr.c 		\
			$(LIB_PATH)my_strlen.c 		\
			$(LIB_PATH)my_strcpy.c 		\
			$(LIB_PATH)my_strcmp.c 		\
			$(LIB_PATH)my_strdup.c 		\
			$(LIB_PATH)my_strcat.c 		\
			$(LIB_PATH)my_arr_len.c 	\
			$(LIB_PATH)my_getnbr.c 		\
			$(LIB_PATH)my_strlen_to_endline.c 	\
			$(LIB_PATH)my_str_a_to_b_cpy.c 		\
			$(LIB_PATH)my_str_to_char_cpy.c 	\
			$(LIB_PATH)my_str_to_word_array.c 	\

OBJ     =    $(SRC:.c=.o)

CC		=    gcc

CFLAGS =	-I include/
CFLAGS += 	-pedantic
CFLAGS += 	-W -Wall -Wextra
CFLAGS += 	-Wno-long-long
CFLAGS += 	-g3

all:       $(NAME)

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lncurses

clean:
	rm -rf $(OBJ)

fclean:         clean
	rm -rf $(NAME)

re:             fclean all
