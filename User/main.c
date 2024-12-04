#include "stm32f10x.h"                  // Device header
// openocd -f stlink-v2.cfg -f stm32f1x.cfg -c "program build/Project.elf verify reset exit"
#include "OLED.h"

int main(void)
{
    //Serial_Init();
    OLED_Init();
    OLED_ShowString(0,0,"Hello World!");
    while (1)
    { 
        
    }
}
