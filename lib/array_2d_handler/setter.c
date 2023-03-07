/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** setter.c
*/

#include "arr2d.h"

int arr2d_set(arr2d_t *array, unsigned int row, unsigned int col, int value)
{
    if (arr2d_exists(array, row, col)) {
        *arr2d_get(array, row, col).value = value;
        return 0;
    }
    return 1;
}
