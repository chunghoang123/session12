#include <stdio.h>

#define MAX 100

void nhapMang(int *arr, int *n) {
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int *arr, int *n, int viTri, int giaTri) {
    if (*n >= MAX) return;
    for (int i = *n; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[viTri] = giaTri;
    (*n)++;
}

void suaPhanTu(int *arr, int n, int viTri, int giaTri) {
    if (viTri >= 0 && viTri < n) {
        arr[viTri] = giaTri;
    }
}

void xoaPhanTu(int *arr, int *n, int viTri) {
    if (viTri >= 0 && viTri < *n) {
        for (int i = viTri; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
    }
}

void sapXepMang(int *arr, int n, int chon) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((chon == 1 && arr[i] < arr[j]) || (chon == 2 && arr[i] > arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timKiemTuyenTinh(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int timKiemNhiPhan(int *arr, int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void menu() {
    printf("1. Nhap gia tri mang\n");
    printf("2. In gia tri mang\n");
    printf("3. Them phan tu\n");
    printf("4. Sua phan tu\n");
    printf("5. Xoa phan tu\n");
    printf("6. Sap xep\n");
    printf("7. Tim kiem\n");
    printf("8. Thoat\n");
}

int main() {
    int arr[MAX], n = 0, chon, viTri, giaTri, x;

    do {
        menu();
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                scanf("%d %d", &viTri, &giaTri);
                themPhanTu(arr, &n, viTri, giaTri);
                break;
            case 4:
                scanf("%d %d", &viTri, &giaTri);
                suaPhanTu(arr, n, viTri, giaTri);
                break;
            case 5:
                scanf("%d", &viTri);
                xoaPhanTu(arr, &n, viTri);
                break;
            case 6:
                printf("1. Giam dan\n2. Tang dan\n");
                scanf("%d", &chon);
                sapXepMang(arr, n, chon);
                break;
            case 7:
                printf("1. Tuyen tinh\n2. Nhi phan\n");
                scanf("%d %d", &chon, &x);
                if (chon == 1) {
                    viTri = timKiemTuyenTinh(arr, n, x);
                } else {
                    viTri = timKiemNhiPhan(arr, n, x);
                }
                if (viTri != -1) {
                    printf("Phan tu %d tim thay o vi tri %d.\n", x, viTri);
                } else {
                    printf("Phan tu %d khong ton tai.\n", x);
                }
                break;
            case 8:
                break;
            default:
                printf("Chuc nang khong hop le.\n");
        }
    } while (chon != 8);

    return 0;
}

