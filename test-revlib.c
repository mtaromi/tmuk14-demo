#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "revlib.h"

void test_reverse()
{
	assert(reverse(0) == 0);
	assert(reverse(1) == 1);
	assert(reverse(2) == 2);
	assert(reverse(10) == 1);
	assert(reverse(12) == 21);
	assert(reverse(234) == 432);
	assert(reverse(31337) == 73313);

	// negative tests
	assert(reverse(-1) == -1);
	assert(reverse(-31337) == -73313);
	assert(reverse(-12) == -21);
}

int main()
{
	test_reverse();
	// test_whatevs();
	// test_something_else();
	printf("Tests passed\n");
}
