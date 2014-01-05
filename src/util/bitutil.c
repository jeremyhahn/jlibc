#include "bitutil.h"

void bitutil_print_8bits(uint8_t x) {
	int i;
	for(i=(sizeof(uint8_t)*8)-1; i>=0; i--)
		(x&(1<<i))?putchar('1'):putchar('0');

	printf("\n");
}

void bitutil_print_32bits(uint32_t x) {
	int i;
	for(i=(sizeof(uint32_t)*8)-1; i>=0; i--)
		(x&(1<<i))?putchar('1'):putchar('0');

	printf("\n");
}

void bitutil_print_64bits(uint64_t x) {
	int i;
	for(i=(sizeof(uint64_t)*8)-1; i>=0; i--)
		(x&(1<<i))?putchar('1'):putchar('0');

	printf("\n");
}
