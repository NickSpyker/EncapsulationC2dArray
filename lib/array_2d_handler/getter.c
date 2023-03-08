/*
** EPITECH PROJECT, 2022
** Array 2d Handler
** File description:
** getter.c
*/

#include "arr2d.h"

result_t arr2d_get(arr2d_t *array, unsigned int row, unsigned int col)
{
    // Vérifier si l'indice de ligne et l'indice de colonne sont valides.
        // Retourner un résultat contenant le pointeur vers la valeur de la case du tableau.

    // Sinon, retourner un résultat d'erreur.
}

result_t arr2d_get_above(arr2d_t *array, unsigned int row, unsigned int col)
{
    // Vérifier si l'indice de ligne est valide pour obtenir la case au-dessus de celle spécifiée.
        // Obtenir le résultat de la case au-dessus de celle spécifiée en utilisant la fonction arr2d_get.

    // Sinon, retourner un résultat d'erreur.
}

result_t arr2d_get_below(arr2d_t *array, unsigned int row, unsigned int col)
{
    // Obtenir le résultat de la case en dessous de celle spécifiée en utilisant la fonction arr2d_get.
}

result_t arr2d_get_right(arr2d_t *array, unsigned int row, unsigned int col)
{
    // Obtenir le résultat de la case à droite de celle spécifiée en utilisant la fonction arr2d_get.
}

result_t arr2d_get_left(arr2d_t *array,  unsigned int row, unsigned int col)
{
    // Vérifier si l'indice de colonne est valide pour obtenir la case à gauche de celle spécifiée.
        // Obtenir le résultat de la case à gauche de celle spécifiée en utilisant la fonction arr2d_get.

    // Sinon, retourner un résultat d'erreur.
}
