/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** getter.c
*/

#include "arr2d.h"

result_t arr2d_get(arr2d_t *array, unsigned int row, unsigned int col)
{
    if (arr2d_exists(array, row, col))
        return make_ok(&array->data[row * array->nb_cols + col]);
    return make_err("Error: Index out of bounds\n");
}

result_t arr2d_get_above(arr2d_t *array, unsigned int row, unsigned int col)
{
    if (0 < row)
        return arr2d_get(array, row - 1, col);
    return make_err("Error: Index out of bounds\n");
}

result_t arr2d_get_below(arr2d_t *array, unsigned int row, unsigned int col)
{
    return arr2d_get(array, row + 1, col);
}

result_t arr2d_get_right(arr2d_t *array, unsigned int row, unsigned int col)
{
    return arr2d_get(array, row, col + 1);
}

result_t arr2d_get_left(arr2d_t *array,  unsigned int row, unsigned int col)
{
    if (0 < col)
        return arr2d_get(array, row, col - 1);
    return make_err("Error: Index out of bounds\n");
}
