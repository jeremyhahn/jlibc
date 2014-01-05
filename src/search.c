#include "search.h"

// O(log(n)) - good
int search_binary(int *array, int key, int start, int end) {
	if(end < start) return -1;
	while(end >= start) {
		int index = (start+end) / 2;
		if(array[index] == key) return index;
		else if(array[index] < key)
			start = index + 1;
		else
			end = index - 1;
	}
	return -1;
}

// O(n) - poor
int search_linear(int *array, int key, int start, int end) {
	int i;
	for(i=start; i<end; i++) {
		if(array[i] == key) return i;
	}
	return -1;
}
