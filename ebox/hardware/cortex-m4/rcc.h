#ifndef __RCC_H
#define __RCC_H
#include "stm32f4xx.h"

void rcc_clock_cmd(uint32_t dev, FunctionalState state);

#endif
