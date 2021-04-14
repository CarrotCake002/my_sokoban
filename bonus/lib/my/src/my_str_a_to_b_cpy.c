/*
** EPITECH PROJECT, 2020
** my_str_a_to_b_cpy.c
** File description:
** copy all characters between a and b
** string into another string
*/

char *my_str_a_to_b_cpy(char *dest, char const *src, int a, int b)
{
    int j = 0;

    while (a < b) {
        dest[j] = src[a];
        a++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}