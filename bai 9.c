#include <stdio.h>

int findLeastFrequent(int arr[], int size, int *tanSuat) {
    int minCount = size + 1;  
    int ketQua = arr[0];       

    for (int i = 0; i < size; i++) {
        int count = 0; 
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count < minCount) {
            minCount = count;
            ketQua = arr[i];
        }
    }

    *tanSuat = minCount;

    return ketQua;
}

int main() {
    int arr[] = {1, 3, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int tanSuat;

    int phanTuItNhat = findLeastFrequent(arr, size, &tanSuat);

    printf("Mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nPhan tu xuat hien it nhat: %d", phanTuItNhat);
    printf("\nSo lan xuat hien: %d\n", tanSuat);

    return 0;
}

