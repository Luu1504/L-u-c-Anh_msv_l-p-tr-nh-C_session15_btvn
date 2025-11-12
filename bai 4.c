#include <stdio.h>

int tinhTong(int mang[], int soPhanTu) {
    int tong = 0;
    int i;
    
    for (i = 0; i < soPhanTu; i++) {
        tong = tong + mang[i];
    }
    
    return tong;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    int ketQua = tinhTong(arr, n);
    printf("Tong cac phan tu: %d", ketQua);
    
    return 0;
}
