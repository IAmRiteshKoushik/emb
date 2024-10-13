#include "stm32f4xx.h"

int main(void){

  RCC->AHB1ENR |= (1U << 2);

  GPIOC->MODER |= (1U << 26);
  while(1){
    GPIOC->ODR |= (1U << 13);
    for(int i = 0; i < 180000; i++){}
    GPIOC->ODR &= ~(1U << 13);
    for(int i = 0; i < 180000; i++){}
  }
}
