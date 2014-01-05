#ifndef JLIBC_ARRAYUTIL_H_
#define JLIBC_ARRAYUTIL_H_

#include <stdlib.h>
#include <stdio.h>

void jlibc_arrayutil_randomize_int(int *array, int len);
void jlibc_arrayutil_print_int(int *array, int len);
int is_ordered_int(int array[], int len);

#endif
