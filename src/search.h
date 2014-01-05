#ifndef JLIBC_SEARCH_H_
#define JLIBC_SEARCH_H_

#include <stdlib.h>
#include <string.h>

int search_binary(int *array, int key, int start, int end);
int search_linear(int *array, int key, int start, int end);

#endif
