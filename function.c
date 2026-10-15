#include <stdio.h>
#include <stdbool.h>

void nhapN(int *n) {
    do {
        printf("Nhap n: ");
        scanf("%d", n);
    } while (*n <= 0);
}

float tinhTrungBinhSoLe(int n) {
    int tong = 0, dem = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            tong += i;
            dem++;
        }
    }
    if (dem == 0) return 0;
    return (float)tong / dem;
}

int demBoi3Va5(int n) {
    int dem = 0;
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            dem++;
        }
    }
    return dem;
}

bool kiemTraNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool kiemTraChinhPhuong(int n) {
    if (n < 0) return false;
    for (int i = 0; i * i <= n; i++) {
        if (i * i == n) return true;
    }
    return false;
}

int demChuSoLe(int n) {
    int dem = 0;
    int tam = n;
    while (tam > 0) {
        int chuSo = tam % 10;
        if (chuSo % 2 != 0) {
            dem++;
        }
        tam /= 10;
    }
    return dem;
}

int demChuSoChan(int n) {
    int dem = 0;
    int tam = n;
    while (tam > 0) {
        int chuSo = tam % 10;
        if (chuSo % 2 == 0) {
            dem++;
        }
        tam /= 10;
    }
    return dem;
}

bool kiemTraDoiXuong(int n) {
    int soDao = 0;
    int tam = n;
    while (tam > 0) {
        soDao = soDao * 10 + (tam % 10);
        tam /= 10;
    }
    return (soDao == n);
}

int main() {
    int n;
    
    nhapN(&n); 
    
    printf("d) %.2f\n", tinhTrungBinhSoLe(n));
    printf("e) %d\n", demBoi3Va5(n));
    printf("f) %d\n", kiemTraNguyenTo(n));
    printf("g) %d\n", kiemTraChinhPhuong(n));
    printf("h) %d\n", demChuSoLe(n));
    printf("i) %d\n", demChuSoChan(n));
    printf("j) %d\n", kiemTraDoiXuong(n));

    return 0;
}
