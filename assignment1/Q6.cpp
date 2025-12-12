 #include <stdio.h>

void xorSwap(int *a, int *b) {
    if (a == b) return;  

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    xorSwap(&x, &y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
