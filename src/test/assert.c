#include "assert.h"

void assert(int a, const char *errmsg) {
	assertions++;
	if(a == 0) {
		printf("errmsg: %s\n", errmsg);
		assert_print_summary();
		assert_print_fail();
		exit(1);
	}
}

void assert_fail(const char *errmsg) {
	assertions++;
	printf("errmsg: %s", errmsg);
	assert_print_summary();
	assert_print_fail();
	exit(1);
}

void assert_print_summary() {
	printf("--------------------\n");
	printf("Tests: %i\n", tests);
	printf("Assertions: %i\n", assertions);
	printf("--------------------\n");
}

void assert_print_pass() {
	printf("\nPASS!\n");
}

void assert_print_fail() {
	printf("\nFAIL\n");
}
