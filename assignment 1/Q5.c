#include <stdio.h>
#include <ctype.h>  

char processChar(char ch, char xorValue) {
    if (isalpha((unsigned char)ch)) {
        
        return ch ^ xorValue;
    } else {
        
        return ch;
    }
}

int main() {
    char ch = 'A';
    char xorValue = 0x20;  

    char result = processChar(ch, xorValue);

    printf("Original: %c, Result: %c\n", ch, result);
    return 0;
}
