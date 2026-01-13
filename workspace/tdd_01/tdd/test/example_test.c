#include "unity.h"


void setUp(void){}
void tearDown(void){}

void test_that_alway_fails(void){
	TEST_ASSERT_EQUAL(2,3);
}

void test_that_alway_passes(void){
	TEST_ASSERT_EQUAL(1,4);
}

void test_fail_message(void)
{
	TEST_FAIL_MESSAGE("This is a Failure.");
}
