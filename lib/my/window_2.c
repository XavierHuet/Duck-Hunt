/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** window_2
*/

#include "hunter.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left = rect->left + offset;
    if (rect->left == max_value)
        rect->left = 0;
}

sfVector2f update_struct_1(sfVector2f vector)
{
    vector.x = 0.005;
    vector.y = 0.005;
    return vector;
}

// sfIntRect update_struct_2(sfIntRect rect)
// {
//     rect.top = 0;
//     rect.left = 0;
//     rect.width = 110;
//     rect.height = 110;
//     return rect;
// }

void sprite_create(stock_t *all)
{
    all->texture = sfTexture_createFromFile("duck.png", NULL);
    all->sprite = sfSprite_create();
    sfSprite_setTexture(all->sprite, all->texture, sfFalse);
}

void background_create(stock_t *all)
{
    all->texture = sfTexture_createFromFile("background.jpg", NULL);
    all->background = sfSprite_create();
    sfSprite_setTexture(all->background, all->texture, sfFalse);
}
