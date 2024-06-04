/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myhunter-xavier.huet
** File description:
** bob
*/

#include "my.h"
#include "hunter.h"

stock_t  *bob(int argc, char **argv)
{
    sfEvent event;
    int cmp_loose;
    stock_t *all = malloc(sizeof(stock_t));

    all->event = event;
    all->loose = 3;
    all->error = error_handler(argc, argv);
    all->verify = verify_flag_h(argc, argv);
    all->vector = (sfVector2f) {10, 0.0};
    all->rect = (sfIntRect) {0, 0, 110, 110};
    all->rect_life = (sfIntRect) {0, 0, 110, 110};
    all->restart.x = -3;
    return all;
}
