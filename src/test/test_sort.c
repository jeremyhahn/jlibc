#include "test_sort.h"

void jlibc_sort_run_tests() {
	int i;
	for(i=0; i<100; i++) { // test a few times to increase reliability of test
		int len = 10, ubound = 9, array[len];
		jlibc_arrayutil_randomize_int(array, len);
		sort_quick(array, 0, ubound);
		assert(is_ordered_int(array, len) == 0, "sort_quick failed to assert array is sorted");
		array[5] = INT_MAX; // negative test; force unsorted array
		assert(is_ordered_int(array, len) == -1, "sort_quick failed to assert array is not sorted");
	}
}
