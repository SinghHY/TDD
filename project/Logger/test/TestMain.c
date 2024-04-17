#include "Core.h"
#include "unity.h"
#include "Main.h"
#include "cmock.h"
#include "MockLED.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Main_Should_InitializeTheDrivers(void)
{
    LED_Init_Expect();
    TEST_ASSERT_EQUAL(0, TestableMain());
}

