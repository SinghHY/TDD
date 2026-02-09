
#include "unity.h"

void test_TheFirst(void)
{
    TEST_IGNORE_MESSAGE("Implement Me");
    TEST_ASSERT_EQUAL_INT(3, 3); 
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    return UNITY_END();
}
