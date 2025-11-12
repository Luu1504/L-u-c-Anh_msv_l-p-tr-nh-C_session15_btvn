#include <stdio.h>

int binarySearch(int arr[], int n, int value) {
    int left = 0;           
    int right = n - 1;      

    while (left <= right) {
        int mid = (left + right) / 2; 

        if (arr[mid] == value) {
            return mid; 
        }
        else if (arr[mid] < value) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    int result = binarySearch(arr, n, value);

    if (result != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", value, result);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", value);

    return 0;
}

