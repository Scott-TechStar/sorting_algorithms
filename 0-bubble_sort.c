/*
 * File: 0-bubble_sort.c
 * Auth: John Mwadime
 */

#include "sort.h"
#include <stdio.h>

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }
        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (!swapped)
            break;

        // Print the array after each pass
        printf("Pass %zu: ", i + 1);
        for (size_t k = 0; k < size; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}
