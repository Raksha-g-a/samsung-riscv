#include <ch32v00x.h>
#include <debug.h>

#define COUNTER_GPIO_PORT GPIOC
#define COUNTER_GPIO_PIN_0 GPIO_Pin_0
#define COUNTER_GPIO_PIN_1 GPIO_Pin_1
#define COUNTER_CLOCK_ENABLE RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE)

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void Delay_Init(void);
void Delay_Ms(uint32_t n);

int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
    SystemCoreClockUpdate();
    Delay_Init();

    GPIO_InitTypeDef GPIO_InitStructure = {0};

    COUNTER_CLOCK_ENABLE;
    GPIO_InitStructure.GPIO_Pin = COUNTER_GPIO_PIN_0 | COUNTER_GPIO_PIN_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(COUNTER_GPIO_PORT, &GPIO_InitStructure);

    uint8_t counter = 0;
    while (1)
    {
        GPIO_WriteBit(COUNTER_GPIO_PORT, COUNTER_GPIO_PIN_0, (BitAction)((counter >> 0) & 1));
        GPIO_WriteBit(COUNTER_GPIO_PORT, COUNTER_GPIO_PIN_1, (BitAction)((counter >> 1) & 1));
        
        counter = (counter + 1) % 4; // Cycle through 00, 01, 10, 11
        Delay_Ms(500);
    }
}

__attribute__((interrupt("WCH-Interrupt-fast"))) void NMI_Handler(void) {}
__attribute__((interrupt("WCH-Interrupt-fast"))) void HardFault_Handler(void)
{
    while (1)
    {
    }
}