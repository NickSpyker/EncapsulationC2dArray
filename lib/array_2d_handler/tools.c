/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** tools.c
*/

#include <stdio.h>
#include "arr2d.h"

int arr2d_exists(arr2d_t *array, unsigned int row, unsigned int col)
{
    return row < array->nb_rows && col < array->nb_cols;
}

int arr2d_row_exists(arr2d_t *array, unsigned int row)
{
    return row < array->nb_rows;
}

int arr2d_col_exists(arr2d_t *array, unsigned int col)
{
    return col < array->nb_cols;
}

void arr2d_display_ints(arr2d_t *array)
{
    unsigned int count_col = 0;

    for (unsigned int i = 0; i < array->size; i++) {
        if (++count_col == array->nb_cols) {
            printf("%d\n", array->data[i]);
            count_col = 0;
            continue;
        }
        printf("%d ", array->data[i]);
    }
}

void arr2d_display_chars(arr2d_t *array)
{
    unsigned int count_col = 0;

    for (unsigned int i = 0; i < array->size; i++) {
        if (++count_col == array->nb_cols) {
            printf("%c\n", array->data[i]);
            count_col = 0;
            continue;
        }
        printf("%c ", array->data[i]);
    }
}
