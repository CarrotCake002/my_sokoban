/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** take a string and convert it into an array
*/

#include "../include/my_call_lib_functions.h"

int check_word_size(char *str, int start)
{
    while (str[start] != '\n' && str[start] != '\0')
        start++;
    return (start);
}

int word_cpy(int i, int k, char *str, char **array)
{
    int j = 0;

    while (str[i] != '\n' && str[i] != '\0') {
        array[k][j] = str[i];
        i++;
        j++;
    }
    array[k][j] = '\0';
    return (i);
}

char **my_str_to_word_array(char *str, char **array)
{
    int i = 0;
    int k = 0;
    int wordsize = 0;
    int arrsize = my_arr_len(str);

    array = malloc(sizeof(char *) * (arrsize + 1));
    if (!array)
        return (NULL);
    while (str[i] != '\0') {
        if (k != 0)
            i++;
        wordsize = check_word_size(str, wordsize);
        array[k] = malloc(sizeof(char) * (wordsize + 1));
        if (!array[k])
            return (NULL);
        i = word_cpy(i, k, str, array);
        k++;
    }
    array[k] = NULL;
    return (array);
}