#include "test_search.h"

void jlibc_search_run_tests() {

	int the_array[10] = { 1, 8, 25, 32, 37, 42, 55, 69, 90 };

	// search_binary tests
	assert(search_binary(the_array, 1, 0, 9) == 0, "search_binary #1 failed");
	assert(search_binary(the_array, 8, 0, 9) == 1, "search_binary #2 failed");
	assert(search_binary(the_array, 25, 0, 9) == 2, "search_binary #3 failed");
	assert(search_binary(the_array, 32, 0, 9) == 3, "search_binary #4 failed");
	assert(search_binary(the_array, 37, 0, 9) == 4, "search_binary #5 failed");
	assert(search_binary(the_array, 42, 0, 9) == 5, "search_binary #6 failed");
	assert(search_binary(the_array, 55, 0, 9) == 6, "search_binary #7 failed");
	assert(search_binary(the_array, 69, 0, 9) == 7, "search_binary #8 failed");
	assert(search_binary(the_array, 90, 0, 9) == 8, "search_binary #9 failed");
	assert(search_binary(the_array, 32, 1, 8) == 3, "search_binary #10 failed");

	// search_linear tests
	assert(search_linear(the_array, 1, 0, 9) == 0, "search_linear #1 failed");
	assert(search_linear(the_array, 8, 0, 9) == 1, "search_linear #2 failed");
	assert(search_linear(the_array, 25, 0, 9) == 2, "search_linear #3 failed");
	assert(search_linear(the_array, 32, 0, 9) == 3, "search_linear #4 failed");
	assert(search_linear(the_array, 37, 0, 9) == 4, "search_linear #5 failed");
	assert(search_linear(the_array, 42, 0, 9) == 5, "search_linear #6 ailed");
	assert(search_linear(the_array, 55, 0, 9) == 6, "search_linear #7 failed");
	assert(search_linear(the_array, 69, 0, 9) == 7, "search_linear #8 failed");
	assert(search_linear(the_array, 90, 0, 9) == 8, "search_linear #9 failed");
	assert(search_binary(the_array, 32, 1, 8) == 3, "search_linear #10 failed");
}
