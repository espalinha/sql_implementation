#ifndef TYPEINTERFACE_H
#define TYPEINTERFACE_H

#include <stdio.h>
#include <stddef.h>

typedef struct {
  int (*compare)(const void *a, const void *b);
  int (*print)(const void *data);
  size_t size;
  void *(*copy)(const void *data);
  void (*free)(void *data);
} TypeInterface;

#endif // TYPEINTERFACE_H
