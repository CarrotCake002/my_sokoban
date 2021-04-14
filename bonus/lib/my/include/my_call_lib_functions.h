/*
** EPITECH PROJECT, 2020
** my_call_lib_functions.h
** File description:
** header including all functions from the libmy.a library
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef MY_CALL_LIB_FUNCTIONS_H_
#define MY_CALL_LIB_FUNCTIONS_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_strlen_to_endline(char *str, int i);
int my_getnbr(char const *str);
void my_sort_int_array(int tab, char *av);
int my_compute_power_rec(int nb, int power);
int my_compute_sqare_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char *dest, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_str_to_char_cpy(char *dest, char const *src, char character);
char **my_str_to_word_array(char *str, char **array);
char *my_strdup(char *res, char *str);
int my_arr_len(char *str);

#endif