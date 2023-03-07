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
    unsigned int size = nb_rows * nb_cols;

    if (array == NULL)
        return NULL;
    array->nb_rows = nb_rows;
    array->nb_cols = nb_cols;
    array->data = malloc(sizeof(int) * (size + 1));
    if (array->data == NULL) {
        free(array);
        return NULL;
    }
    for (unsigned int i = 0; i < size; i++)
        array->data[i] = fill_with;
    array->data[size] = '\0';
    return array;
}

void arr2d_delete(arr2d_t *array)
{
    free(array->data);
    free(array);
}
