/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find a string inside another string
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int x = 0;
    int y = 0;

    while (str[y] != '\0') {
        x = 0;
        while ((str[y] == to_find[x]) && (to_find[x] != '\0')) {
                x++;
                y++;
        }
        if (to_find[x] == '\0')
            return (&str[y - x]);
        y++;
    }
    return (NULL);
}
