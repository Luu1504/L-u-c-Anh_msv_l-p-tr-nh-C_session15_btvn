#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0;
    int newSize = 0; 
  
    for (int i = 0; i < size; i++) {
        int trungLap = 0; 

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                trungLap = 1; 
                break;
            }
        }

        if (!trungLap) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int kichThuocMoi = removeDuplicates(arr, size);

    printf("\nMang sau khi loai bo trung lap: ");
    for (int i = 0; i < kichThuocMoi; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nKich thuoc moi cua mang: %d\n", kichThuocMoi);

    return 0;
}

