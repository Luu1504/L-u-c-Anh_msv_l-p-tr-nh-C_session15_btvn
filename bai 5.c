#include <stdio.h>

void tim_phan_tu_nhieu_nhat(int arr[], int n) {
    int phan_tu = arr[0]; 
    int so_lan_max = 1;    
    
    for (int i = 0; i < n; i++) {
        int dem = 1;  
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                dem++;
            }
        }
        
        if (dem > so_lan_max) {
            so_lan_max = dem;
            phan_tu = arr[i];
        }
    }
    
    printf("Phan tu: %d\n", phan_tu);
    printf("So lan: %d\n", so_lan_max);
}

int main() {
    int arr1[] = {1, 2, 3, 2, 2, 4, 1};
    int n1 = 7;
    
    printf("Mang 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    tim_phan_tu_nhieu_nhat(arr1, n1);
    printf("\n");
    
    int arr2[] = {5, 5, 5, 2, 2, 5, 2, 5};
    int n2 = 8;
    
    printf("Mang 2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    tim_phan_tu_nhieu_nhat(arr2, n2);
    
    return 0;
}
