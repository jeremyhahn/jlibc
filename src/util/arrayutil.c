#include "arrayutil.h"

void jlibc_arrayutil_randomize_int(int *array, int len) {
	int numbers[] = {0,1,2,3,4,5,6,7,8,9};
	int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
	while(len-- > 0) {
		int first = numbers[rand() % 10];
		int second = primes[rand() % 20];
		int third = rand() % 6 + 1;
		if(rand() % 2 == 0) {
			*array++ = (second - first) * third;
		}
		else {
			*array++ = (first + second) * third;
		}
	}
}

void jlibc_arrayutil_print_int(int *array, int len) {
	int i;
	for(i=0; i<len; i++) {
		printf("%i ", array[i]);
	}
	printf("\n");
}

int is_ordered_int(int *array, int len) {
	int i, last_val;
	for(i=0; i<len; i++) {
		if(i == 0) {
		   last_val = array[i];
		   continue;
		}
		if(array[i] >= last_val) {
		   last_val = array[i];
		   continue;
		}
		return -1;
	}
	return 0;
}
