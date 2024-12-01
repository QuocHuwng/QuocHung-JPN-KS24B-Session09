#include <stdio.h>

int main() {
    int arr[100];  
    int n, i, vitri;

    printf("Nhap so phan tu muon nhap vao mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &vitri);
    if (vitri < 0 || vitri >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (i = vitri; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    n--;
    printf("Mang sau khi xoa phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
