#ifndef INTEGER_H
#define INTEGER_H

#include "TypeInterface.h"
#include <stdlib.h>

// Implementing the integer type interface

int int_compare(const void *a, const void *b);
int int_print(const void *data);
void *int_copy(const void *data);
void int_free(void *data);

extern const TypeInterface Integer;

#endif // INTEGER_H
