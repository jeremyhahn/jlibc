#include <stdio.h>
#include <time.h>
#include "test/test_vector.h"
#include "test/test_search.h"
#include "test/test_sort.h"

void run_test(void (*test_func)()) {
	tests++;
	(*test_func)();
}

int main() {

	srand(time(NULL));

    run_test(&jlibc_vector_run_tests);
    run_test(&jlibc_search_run_tests);
    run_test(&jlibc_sort_run_tests);

    assert_print_summary();
    assert_print_pass();

    return 0;
}
