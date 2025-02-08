#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

#define GPIO_OK    0
#define GPIO_ERR  -1

void     GPIO_Init(void);
int      GPIO_SetPinAsOutput(uint8_t Pin);
int      GPIO_SetPinAsInput(uint8_t Pin);


#endif //GPIO_H
