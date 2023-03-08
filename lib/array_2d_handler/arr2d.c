/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** arr2d.c
*/

#include "arr2d.h"

arr2d_t *arr2d_new(unsigned int nb_rows, unsigned int nb_cols, int fill_with)
{
    arr2d_t *array = malloc(sizeof(arr2d_t));
    array->size = nb_rows * nb_cols;

    if (array == NULL)
        return NULL;
    array->nb_rows = nb_rows;
    array->nb_cols = nb_cols;
    array->data = malloc(sizeof(int) * array->size);
    if (array->data == NULL) {
        free(array);
        return NULL;
    }
    for (unsigned int i = 0; i < array->size; i++)
        array->data[i] = fill_with;
    return array;
}

void arr2d_delete(arr2d_t *array)
{
    free(array->data);
    free(array);
}
