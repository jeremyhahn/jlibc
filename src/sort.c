#include "sort.h"

// best: O(n log n), worst: O(n2), avg: O(n log n)
void sort_quick(int *array, int left, int right) {
	int i = left, j = right;
	int pivot = array[left + (right - left) / 2];
	int tmp;
	// partition
	while(i <= j) {
		while(array[i] < pivot) {
			i++;
		}
		while(array[j] > pivot) {
			j--;
		}
		if(i <= j) {
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			j--;
		}
	}
	// recursion
	if(left < j) sort_quick(array, left, j);
	if(i < right) sort_quick(array, i, right);
}
