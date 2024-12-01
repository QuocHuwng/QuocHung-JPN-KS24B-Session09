#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i, vitri, giatri;

    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can chen: ");
    scanf("%d", &giatri);

    printf("Nhap vi tri muon chen (0 den %d): ", n);
    scanf("%d", &vitri);

    for (i = n; i > vitri; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[vitri] = giatri; 

    n++;

    printf("Mang sau khi chen gia tri:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

