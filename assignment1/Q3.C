#include <stdio.h>
#include <stdlib.h>

void printBinary(unsigned int n) {
    int bits = sizeof(n) * 8;

    for (int i = bits - 1; i >= 0; i--) {
        unsigned int mask = 1u << i;
        printf("%d", (n & mask) ? 1 : 0);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) { 
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    unsigned int num = atoi(argv[1]); 

    printf("Binary of %u: ", num);
    printBinary(num);
    printf("\n");

    return 0;
}
