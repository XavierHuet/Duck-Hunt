/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** window_3
*/

#include "hunter.h"

int find_position_x(sfSprite *sprite)
{
    int pos = sfSprite_getPosition(sprite).x;

    return pos;
}

int find_position_y(sfSprite *sprite)
{
    int pos = sfSprite_getPosition(sprite).y;

    return pos;
}

void animate_sprite(stock_t *all)
{
    if (all->seconds > 1.0) {
        move_rect(&all->rect, 110, 330);
        sfClock_restart(all->clock);
    }
}

void display_classic(stock_t *all)
{
    int pos_x = find_position_x(all->sprite);

    sfSprite_setTextureRect(all->sprite, all->rect);
    sfSprite_setTextureRect(all->life, all->rect_life);
    sfRenderWindow_drawSprite(all->window, all->background, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprite, NULL);
    sfRenderWindow_drawSprite(all->window, all->life, NULL);
    display_score(all);
    if (pos_x <= 1919 )
        sfSprite_move(all->sprite, all->vector);
    else {
        sfSprite_setPosition(all->sprite, all->restart);
        animate_life(all);
        all->loose = all->loose - 1;
    }
    sfRenderWindow_display(all->window);
}

void destroy_all(stock_t *all)
{
    sfRenderWindow_destroy(all->window);
    sfTexture_destroy(all->texture);
    sfSprite_destroy(all->sprite);
    sfSprite_destroy(all->background);
    free(all);
}
