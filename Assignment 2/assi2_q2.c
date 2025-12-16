#include<stdio.h>
int main(){
    unsigned char s = 0x08;
    unsigned char a = 0x80,b;
    a=a>>4;
    b=s&a;
    if(b==0x08){
        printf("Bit 3 is set");
    }
    else{
        printf("Bit 3 is clear");
    }
}