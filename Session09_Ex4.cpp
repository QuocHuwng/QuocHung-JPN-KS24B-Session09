#include <stdio.h>

int main() {
    int arr[100]; 
    int n = 0; 
    int luaChon;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        if (luaChon == 1) {
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("Phan tu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        }
        else if (luaChon == 2) {
            printf("Mang hien tai la: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else if (luaChon == 3) {
            printf("Nhap phan tu can them: ");
            scanf("%d", &arr[n]);
            n++;
        }
        else if (luaChon == 4) {
            int index, value;
            printf("Nhap chi so phan tu can sua (0 den %d): ", n-1);
            scanf("%d", &index);
            if (index >= 0 && index < n) {
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[index] = value;
            } else {
                printf("Chi so khong hop le.\n");
            }
        }
        else if (luaChon == 5) {
            int index;
            printf("Nhap chi so phan tu can xoa (0 den %d): ", n-1);
            scanf("%d", &index);
            if (index >= 0 && index < n) {
                for (int i = index; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            } else {
                printf("Chi so khong hop le.\n");
            }
        }
        else if (luaChon == 6) {
            printf("Thoat chuong trinh.\n");
            break;
        } else {
            printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    }

    return 0;
}
