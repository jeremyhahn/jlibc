#ifndef JLIBC_VECTOR_H
#define JLIBC_VECTOR_H

#define VECTOR_INITIAL_SIZE 100

typedef struct {
  int id;
  int size;
  int *data;
} Vector;

void vector_init(Vector *vector);
void vector_add(Vector *vector, int value);
int vector_get(Vector *vector, int index);
void vector_set(Vector *vector, int index, int value);
void vector_double_capacity_if_full(Vector *vector);
void vector_free(Vector *vector);

#endif
