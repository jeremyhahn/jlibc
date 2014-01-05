#include "test_sort.h"

void jlibc_sort_print_array(int *array, const char *message) {

	printf("%s: ", message);
	int i=0;
	for(i=0; i<10; i++) {
		printf("%i ", array[i]);
	}
	printf("\n");
}

void jlibc_sort_scramble(int *array) {

	int i;
	for(i=0; i<10; i++) {
		int num = rand() % 100 + 1;
		array[i] = num;
		i++;
	}
}

int is_ordered(int *array, int len) {
	int last_val = NULL;
	int i;
	for(i=0; i<len; i++) {
		if(last_val == NULL) {
			last_val = array[i];
			continue;
		}
		if(array[i] >= last_val) continue;
		return -1;
	}
	return 0;
}

void jlibc_sort_run_tests() {

	int array[10];
	jlibc_sort_scramble(array);

	sort_quick(array, 0, 10);

	assert(is_ordered(array, 10) == 0, "sort_quick failed");

	array[5] = 1; // force the array to become unordered
	assert(is_ordered(array, 10) == -1, "sort_quick failed");
}
