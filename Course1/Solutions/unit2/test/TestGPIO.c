
#include "unity.h"
#include "GPIO.h"
#include "MK20DX256.h"

void setUp(void)
{
    GPIO_Init( );
}

void tearDown(void)
{
}


void test_Init_should_ConfigurePinsToDefaults(void)
{
    PORTC.PDDR = 0;
    PORTC.PSOR = 0;
    PORTC.PCOR = 0;

    GPIO_Init( );

    TEST_ASSERT_EQUAL_HEX32( 0x1012A000, PORTC.PDDR );
    TEST_ASSERT_EQUAL_HEX32( 0x10102000, PORTC.PSOR );
    TEST_ASSERT_EQUAL_HEX32( 0x00028000, PORTC.PCOR );
}

void test_SetPinAsOutput_should_ConfigurePinDirection(void)
{
   PORTC.PDDR = 0;

   TEST_ASSERT_EQUAL(GPIO_OK, GPIO_SetPinAsOutput(0));
   TEST_ASSERT_EQUAL_HEX32( BIT_TO_MASK(0), PORTC.PDDR );

   TEST_ASSERT_EQUAL(GPIO_OK, GPIO_SetPinAsOutput(22));
   TEST_ASSERT_EQUAL_HEX32( BIT_TO_MASK(0) | BIT_TO_MASK(22), PORTC.PDDR );

   TEST_ASSERT_EQUAL(GPIO_OK, GPIO_SetPinAsOutput(31));
   TEST_ASSERT_EQUAL_HEX32( BIT_TO_MASK(0) | BIT_TO_MASK(22) | BIT_TO_MASK(31), PORTC.PDDR );
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_Init_should_ConfigurePinsToDefaults);
    RUN_TEST(test_SetPinAsOutput_should_ConfigurePinDirection);
    return UNITY_END();
}
