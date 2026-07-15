#include "TypeInterface.h"
#include "Integer.h"
#include <stdlib.h>

// Implementing the integer type interface

int int_compare(const void *a, const void *b) {
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    return (int_a > int_b) - (int_a < int_b);
}

int int_print(const void *data) {
    printf("%d", *(const int *)data);
    return 0;
}

void *int_copy(const void *data) {
    int *copy = malloc(sizeof(int));
    if (copy) {
        *copy = *(const int *)data;
    }
    return copy;
}

void int_free(void *data) {
    free(data);
}

const TypeInterface Integer = {
    .compare = int_compare,
    .print = int_print,
    .size = sizeof(int),
    .copy = int_copy,
    .free = int_free
};
