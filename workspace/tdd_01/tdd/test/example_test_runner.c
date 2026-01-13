#include "unity.h"


//Forward declaration of test functions
void test_that_alway_fails(void);
void test_that_alway_passes(void);
void test_fail_message(void);

int main(void)
{
	//1. Begin unity
	 UNITY_BEGIN();

	//2. Run tests
	 RUN_TEST(test_that_alway_fails);
	 RUN_TEST(test_that_alway_passes);
	 RUN_TEST(test_fail_message);

	//3. End unity
	 return UNITY_END();
}
