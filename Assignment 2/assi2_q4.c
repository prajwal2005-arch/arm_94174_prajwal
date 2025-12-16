#include<stdio.h>
int main(){
    unsigned int v = 5;
    printf("Original value : %x",v);
    unsigned int a = v<<2;
    printf("\nLeft shift by 2 (Hex value): %x",a);
    unsigned int b = v>>1;
    printf("\nRight shift by 1(Hex value): %x",b);
}