#include "stm32f4xx.h"

int main(void) {

  /* The GPIOA clock is initialized by writing 1 to bit-0 of AHB1ENR */
  RCC->AHB1ENR |= (1U << 0);

  /* PA5 is set to output mode by writing 1 to bit-10 of MODER */
  GPIOA->MODER |= (1U << 10);
  while (1) {
    /* Turn ON PA5 by writing 1 to bit-5 of ODR */
    GPIOA->ODR |= (1U << 5);

    /* Cause delay */
    for (int i = 0; i < 1000000; i++) {
    }

    /* Turn OFF PA5 by writing 0 to bit-5 of ODR */
    GPIOA->ODR &= ~(1U << 5);

    /* Cause delay */
    for (int i = 0; i < 1000000; i++) {
    }
  }
  return 0;
}
