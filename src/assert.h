#ifndef JLIBC_ASSERT_H_
#define JLIBC_ASSERT_H_

#include <stdio.h>
#include <stdlib.h>

int tests;
int assertions;

void assert(int a, const char *errmsg);
void assert_fail(const char *errmsg);

void assert_print_summary();
void assert_print_pass();
void assert_print_fail();

#endif
