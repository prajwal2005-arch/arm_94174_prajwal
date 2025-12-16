#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0xAA;   

    printf("Register before: 0x%02X\n", reg);

    
    uint8_t read_value = (reg >> 2) & 0x07;
    printf("Read bits 2 to 4: 0b%03X (%d)\n", read_value, read_value);

    
    reg = (reg & ~(0x07 << 2)) | (0x03 << 2);

    printf("Register after : 0x%02X\n", reg);

    return 0;
}
