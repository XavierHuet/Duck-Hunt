/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** window_4
*/

#include "hunter.h"
#include "my.h"

int verify_flag_h(int argc, char **argv)
{
    if (argc == 1)
        return 0;
    if (argc == 2 && my_strcmp("-h", argv[1]) == 0)
        return 1;
    else
        return 0;
}

int flag_h_handler(void)
{
    char *str = "The aim of the game is to shoot ducks, if you miss ";
    char *str2 = "3 ducks you lose, each duck gives you 10 points.";

    my_printf("%s%s", str, str2);
    return 1;
}

int error_handler(int argc, char **argv)
{
    if (argc == 1)
        return 0;
    if (argc == 2 && my_strcmp("-h", argv[1]) == 1)
        return 84;
    if (argc > 2)
        return 84;
    else
        return 0;
}

void animate_life(stock_t *all)
{
    move_rect(&all->rect_life, 110, 330);
}

void life_create(stock_t *all)
{
    all->texture = sfTexture_createFromFile("heart.png", NULL);
    all->life = sfSprite_create();
    sfSprite_setTexture(all->life, all->texture, sfFalse);
    sfSprite_setPosition(all->life, (sfVector2f) {1560, 0});
}
