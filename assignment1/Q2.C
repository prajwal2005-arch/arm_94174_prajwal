#include <stdio.h>

void printBinary(unsigned int n) {
    int bits = sizeof(n) * 8;  

    for (int i = bits - 1; i >= 0; i--) {
        unsigned int mask = 1u << i;

        
        printf("%d", (n & mask) ? 1 : 0);
    }
}

int main() {
    unsigned int num = 29;
    printf("Binary of %u: ", num);
    printBinary(num);
    return 0;
}
