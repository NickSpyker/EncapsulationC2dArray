/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** main.c
*/

#include "lib/array_2d_handler/arr2d.h"

int main(void)
{
    arr2d_t *array = arr2d_new(11, 31, '\0');

    for (int i = 0; arr2d_exists(array, i, 0); i++) {
        for (int j = 0; arr2d_exists(array, i, j); j++) {
            arr2d_set(array, i, j, i % 2 ? j % 2 ? '.' : '#' : '#');
        }
    }

    if (arr2d_exists(array, 3, 3))
        arr2d_set(array, 3, 3, '+');

    arr2d_display_chars(array);
    arr2d_delete(array);
    return 0;
}
