#include "test_vector.h"

void jlibc_vector_run_tests() {
	Vector vector;
	vector_init(&vector);
	int i;
	for(i=0; i<1999; i++) {
		vector_add(&vector, i);
	}
	vector_set(&vector, 100, 200);
	assert((vector_get(&vector, 100) == 200) == 1, "vector_get positive test case failed");
	assert((vector_get(&vector, 100) == 0) == 0, "vector_get negative test case failed");
	vector_get(&vector, 200);
	vector_free(&vector);
}
