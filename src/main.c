/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** main
*/

#include "my.h"
#include "hunter.h"

int main(int argc, char **argv)
{
    stock_t *all = bob(argc, argv);

    if (all->error == 84)
        return 84;
    if (all->verify == 1 && flag_h_handler() == 1)
        return 0;
    create_all(all);
    while (sfRenderWindow_isOpen(all->window) && all->loose != 0) {
        sfRenderWindow_setFramerateLimit(all->window, 60);
        all->restart.y = rand() % 570;
        analyse_events(all->window, all->event, all);
        sfRenderWindow_clear(all->window, sfBlack);
        all->time = sfClock_getElapsedTime(all->clock);
        all->seconds = all->time . microseconds / 250000.0;
        animate_sprite(all);
        display_classic(all);
    }
    destroy_all(all);
    return (0);
}
