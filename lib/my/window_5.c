/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** window_5
*/

#include "my.h"
#include "hunter.h"

void boucle(int i, int p, char *str)
{
    int diff = i - p;
    int tmp;
    int tmp2;

    while (diff >= 1) {
        tmp = str[i];
        tmp2 = str[p];
        str[i] = tmp2;
        str[p] = tmp;
        i = i - 1;
        p = p + 1;
        diff = i - p;
    }
}

char *my_revstr(char *str)
{
    int i = 0;
    int p = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    i = i - 1;
    boucle(i, p, str);
    return str;
}

int nb_digits(long long int nb)
{
    long long int nb1 = nb;
    long long int div = 1;
    int cmp = 0;

    if (nb1 < 0) {
        nb1 = nb1 * (-1);
        nb = nb * (-1);
    }
    while (nb1 > 9) {
        nb1 = nb1 / 10;
        div = div * 10;
    }
    while (div >= 1) {
        nb1 = nb / div;
        cmp = cmp + 1;
        nb = nb % div;
        div = div / 10;
    }
    return cmp;
}

char *int_to_str(int nb)
{
    int i = 0;
    char *str;
    int loop = nb_digits(nb);

    str = malloc(sizeof(char) * (nb_digits(nb) + 1));
    while (loop > 0) {
        str[i] = nb % 10 + '0';
        i = i + 1;
        nb = nb / 10;
        loop = nb - 1;
    }
    str[i] = '\0';
    my_revstr(str);
    return str;
}

void display_score(stock_t *all)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("font.ttf");
    char *score = int_to_str(all->score);

    sfText_setString(text, "Score =");
    sfText_setFont(text, font);
    sfText_setColor(text, sfBlack);
    sfText_setCharacterSize(text, 60);
    sfText_setPosition(text, (sfVector2f){0, 0});
    sfRenderWindow_drawText(all->window, text, NULL);
    sfText_setString(text, score);
    sfText_setPosition(text, (sfVector2f){160, 0});
    sfRenderWindow_drawText(all->window, text, NULL);
    sfText_destroy(text);
    sfFont_destroy(font);
}
