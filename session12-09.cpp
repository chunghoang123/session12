#include <stdio.h>
#include <math.h>
int nguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void nhapMang(int n, int m, int a[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
void inMang(int n, int m, int a[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void inGoc(int n, int m, int a[n][m]) {
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = 0;
        }
    }
    b[0][0] = a[0][0];
    b[0][m - 1] = a[0][m - 1];
    b[n - 1][0] = a[n - 1][0];
    b[n - 1][m - 1] = a[n - 1][m - 1];
    inMang(n, m, b);
}
void inBien(int n, int m, int a[n][m]) {
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = (i == 0 || i == n - 1 || j == 0 || j == m - 1) ? a[i][j] : 0;
        }
    }
    inMang(n, m, b);
}
void inCheo(int n, int m, int a[n][m]) {
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = (i == j || i + j == m - 1) ? a[i][j] : 0;
        }
    }
    inMang(n, m, b);
}
void inNguyenTo(int n, int m, int a[n][m]) {
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = nguyenTo(a[i][j]) ? a[i][j] : 0;
        }
    }
    inMang(n, m, b);
}
void menu() {
    printf("1. Nhap gia tri cac phan tu cua mang\n");
    printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3. In ra cac phan tu o goc theo ma tran\n");
    printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
    printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
    printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
    printf("7. Thoat\n");
}
int main() {
    int n, m, chon;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[n][m];
    do {
        menu();
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                nhapMang(n, m, a);
                break;
            case 2:
                inMang(n, m, a);
                break;
            case 3:
                inGoc(n, m, a);
                break;
            case 4:
                inBien(n, m, a);
                break;
            case 5:
                inCheo(n, m, a);
                break;
            case 6:
                inNguyenTo(n, m, a);
                break;
            case 7:
                break;
            default:
                printf("Chuc nang khong hop le, vui long chon lai.\n");
        }
    } while (chon != 7);
    return 0;
}

