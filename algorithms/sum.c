#include "algorithms.h"

void print_the_smaller(const void *a, const void *b, const TypeInterface *type) {
    if (type->compare(a, b) < 0) {
        type->print(a);
    } else {
        type->print(b);
    }
}

