/*
** EPITECH PROJECT, 2023
** window
** File description:
** window
*/

#include "hunter.h"

sfRenderWindow *create_window(unsigned int width, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My Window",
                                            sfDefaultStyle, NULL);
    return (window);
}

void manage_mouse_click(sfMouseButtonEvent event, stock_t *all)
{
    int pos_x = find_position_x(all->sprite);
    int pos_y = find_position_y(all->sprite);

    if (event.x >= pos_x && event.x <= pos_x + 110 &&
            event.y >= pos_y && event.y <= pos_y + 110) {
        sfSprite_setPosition(all->sprite, all->restart);
        all->score = all->score + 10;
            }
}

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void analyse_events(sfRenderWindow *window, sfEvent event, stock_t *all)
{
    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton, all);
    if (event.type == sfEvtClosed)
        close_window(window);
}

void create_all(stock_t *all)
{
    all->window = create_window(1670, 1080);
    background_create(all);
    sprite_create(all);
    life_create(all);
    all->clock = sfClock_create();
}
