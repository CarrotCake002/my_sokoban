/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** checks if the given string is printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 0) && (str[i] <= 126))
            i++;
        return (0);
    }
    return (1);
}
