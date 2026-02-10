
#include "unity.h"
#include "Fib.h"

/*https://chatgpt.com/share/698a50d7-8324-800b-80d4-d0d60a3c7641*/
/* above is the for details for this lab*/

void setUp(void)
{
  // set stuff up here
}

void tearDown(void)
{
  // clean stuff up here
}

void test_TheFirst(void)
{
    TEST_IGNORE_MESSAGE("Implement Me");
}
/* ===== Fibonacci_GetElement tests ===== */
void test_Fibonacci_GetElement_zero_returns_1(void)
{
    TEST_ASSERT_EQUAL(1, Fibonacci_GetElement(0));
}

void test_Fibonacci_GetElement_one_returns_1(void)
{
    TEST_ASSERT_EQUAL(1, Fibonacci_GetElement(1));
}

void test_Fibonacci_GetElement_two_returns_1(void)
{
    TEST_ASSERT_EQUAL(1, Fibonacci_GetElement(2));
}

void test_Fibonacci_GetElement_five_returns_5(void)
{
    TEST_ASSERT_EQUAL(5, Fibonacci_GetElement(5));
}

/* ===== Fibonacci_IsInSequence tests ===== */

void test_Fibonacci_IsInSequence_negative_returns_0(void)
{
    TEST_ASSERT_EQUAL(0, Fibonacci_IsInSequence(-5));
}

void test_Fibonacci_IsInSequence_one_returns_1(void)
{
    TEST_ASSERT_EQUAL(1, Fibonacci_IsInSequence(1));
}

void test_Fibonacci_IsInSequence_three_returns_1(void)
{
    TEST_ASSERT_EQUAL(1, Fibonacci_IsInSequence(3));
}

/*Largest safe Fibonacci value*/
void test_Fibonacci_GetElement_46_does_not_overflow(void)
{
    TEST_ASSERT_EQUAL(1836311903, Fibonacci_GetElement(46));
}

void test_Fibonacci_GetElement_47_overflows_int(void)
{
    int result = Fibonacci_GetElement(47);

    /* Overflow usually produces negative or wrapped values */
    TEST_ASSERT_TRUE(result < 0 || result < Fibonacci_GetElement(46));
}

void test_Fibonacci_GetElement_very_large_index(void)
{
    int result = Fibonacci_GetElement(1000);

    TEST_ASSERT_TRUE(result <= 0 || result < Fibonacci_GetElement(46));
}

void test_Fibonacci_IsInSequence_very_large_number(void)
{
    TEST_ASSERT_EQUAL(0, Fibonacci_IsInSequence(1000000000));
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    RUN_TEST(test_Fibonacci_GetElement_zero_returns_1);
    RUN_TEST(test_Fibonacci_IsInSequence_negative_returns_0);
    RUN_TEST(test_Fibonacci_IsInSequence_one_returns_1);
    RUN_TEST(test_Fibonacci_IsInSequence_three_returns_1);
    RUN_TEST(test_Fibonacci_GetElement_one_returns_1);
    RUN_TEST(test_Fibonacci_GetElement_two_returns_1);
    RUN_TEST(test_Fibonacci_GetElement_five_returns_5);
    RUN_TEST(test_Fibonacci_GetElement_46_does_not_overflow);

    RUN_TEST(test_Fibonacci_GetElement_47_overflows_int);
    RUN_TEST(test_Fibonacci_GetElement_very_large_index);
    RUN_TEST(test_Fibonacci_IsInSequence_very_large_number);
    return UNITY_END();
}
