#include<stdio.h>
int main(){
    unsigned char r = 0x2A;
    printf("Original value : %8b",r);
    unsigned char a = 0x80;
    a=a>>3;
    r=r|a;
    printf("\nSet bit 4 : %8b",r);
    a=0x80;
    a=a>>6;
    r=r&~(a);
    printf("\nClear bit 1 : %8b",r);
    a=0x80;
    a=a>>2;
    r=r^a;
    printf("\nToggle bit 5 : %8b",r);
}