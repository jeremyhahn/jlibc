#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void vector_init(Vector *vector) {
  vector->id = 0;
  vector->size = VECTOR_INITIAL_SIZE;
  vector->data = malloc(sizeof(int) * vector->size);
}

void vector_add(Vector *vector, int value) {
  vector_double_capacity_if_full(vector);
  vector->data[vector->id++] = value;
}

int vector_get(Vector *vector, int index) {
  if (index >= vector->id || index < 0) {
    printf("Vector index %d out of bounds. Size: %i\n", index, vector->size);
    exit(1);
  }
  return vector->data[index];
}

void vector_set(Vector *vector, int index, int value) {
  vector->data[index] = value;
}

void vector_double_capacity_if_full(Vector *vector) {
  if(vector->id >= vector->size) {
     vector->size *= 2;
     vector->data = realloc(vector->data, sizeof(int) * vector->size);
  }
}

void vector_free(Vector *vector) {
  free(vector->data);
}
