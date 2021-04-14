/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** script that allows us to reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = my_strlen(str);
    int a = 0;
    int word[i];

    i--;
    while (i >= 0) {
        word[a] = str[i];
        i--;
        a++;
    }
    word[a] = '\0';
    i = 0;
    a = 0;
    while (word[a])
        str[i++] = word[a++];
    return (str);
}
