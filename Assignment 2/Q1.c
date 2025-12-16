#include <stdio.h>
#include <stdint.h>

int main()
{
    int reg = 0x2A, rem, a[7], i;
    while(i >=0)
    {
        rem = reg%2;
        a[i] = rem;
        i--;
        reg = reg/2;
    }
    printf("Binary No. =");
    for(i = 0;i < 8;i++)
    {
        printf("%d",a[i]);
    }

}