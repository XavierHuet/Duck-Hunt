/*
** EPITECH PROJECT, 2023
** do8
** File description:
** do8
*/

#include "my.h"

char *my_strndup(char const *src, int n)
{
    int i = 0;
    int l = my_strlen(src) + 1;
    char *str = malloc(sizeof(char) * l);

    while (i < n + 1) {
        str[i] = src[i];
        i = i + 1;
    }
    str[l] = '\0';
        return (str);
}
