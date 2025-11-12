#include <stdio.h>

int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

int main() {
    int a = 10, b = 5;
    
    printf("Hieu: %d\n", hieu(a, b));
    printf("Tich: %d\n", tich(a, b));
    
    return 0;
}
