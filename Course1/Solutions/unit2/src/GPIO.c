#include "GPIO.h"
#include "MK20DX256.h"

static uint32_t ReverseMask;

void GPIO_Init(void)
{
    PORTC.PSOR = 0x10102000;
    PORTC.PCOR = 0x00028000;
    PORTC.PDDR = 0x1012A000;
    ReverseMask = 0x00000022;
}

int GPIO_SetPinAsOutput(uint8_t Pin)
{
    if (Pin >= 32)
        return GPIO_ERR;

    PORTC.PDDR |= BIT_TO_MASK(Pin);

    return GPIO_OK;
}

int GPIO_SetPinAsInput(uint8_t Pin)
{
    if (Pin >= 32)
        return GPIO_ERR;

    PORTC.PDDR &= ~(BIT_TO_MASK(Pin));

    return GPIO_OK;
}