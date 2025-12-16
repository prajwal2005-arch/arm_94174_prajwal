#include<stdio.h>
int main(){
    unsigned int r = 0xABCD;
    unsigned int a = 0x000f;
    unsigned int b = r&a;
    printf("Lower 4 bits in hexadecimal : %x ",b);
    a=0x00f0;
    unsigned int c = r&a;
    c=c>>4;//to print c instead of c0
    printf("\nfirst 4 bits of lower byte in hexadecimal : %x ",c);
}