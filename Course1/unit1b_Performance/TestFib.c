
#include "unity.h"
#include "Fib.h"
#include <time.h>

/*https://chatgpt.com/share/698a50d7-8324-800b-80d4-d0d60a3c7641*/
/* above is the for details for this lab*/

static long elapsed_ms(clock_t start, clock_t end)
{
    return (long)((end - start) * 1000 / CLOCKS_PER_SEC);
}



void test_TheFirst(void)
{
    TEST_IGNORE_MESSAGE("Implement Me");
}

void test_Fibonacci_GetElement_performance(void)
{
    clock_t start = clock();

    Fibonacci_GetElement(100000);

    clock_t end = clock();

    TEST_ASSERT_LESS_OR_EQUAL(
        5,
        elapsed_ms(start, end)
    );
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    RUN_TEST(test_Fibonacci_GetElement_performance);
    return UNITY_END();
}
