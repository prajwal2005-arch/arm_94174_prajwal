#include <stdio.h>
#include <stdint.h>


int countOnes(uint8_t n) {
    int count = 0;
    while (n) {
        n &= (n - 1);  
        count++;
    }
    return count;
}


uint8_t makeEvenParity(uint8_t byte) {
    int ones = countOnes(byte);

    if (ones % 2 != 0) {
        
        byte |= 0x80;
    }

    return byte;
}

int main() {
    uint8_t b = 0x35;  

    printf("Original byte: 0x%02X\n", b);

    uint8_t result = makeEvenParity(b);

    printf("Byte after parity check: 0x%02X\n", result);

    return 0;
}
