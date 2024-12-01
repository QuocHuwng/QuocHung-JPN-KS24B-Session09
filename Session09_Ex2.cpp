#include <stdio.h>

int main() {
    int arr[100];
    int n, i, vitri, giatri;

    printf("Nhap so phan tu muon nhap vao mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &vitri);

    if (vitri < 0 || vitri >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &giatri);

    arr[vitri] = giatri;

    printf("Mang sau khi sua:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

