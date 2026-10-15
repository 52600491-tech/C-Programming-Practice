#include <stdio.h>

void tongchan(int a[], int n)
{
    int i;
    int sum = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Tong chan cac so trong mang la: %d\n", sum);
}

// b. Dem so le
void demsole(int a[], int n)
{
    int i;
    int count_le = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            count_le++;
    }

    printf("So luong so le trong mang la: %d\n", count_le);
}

// Kiem tra so nguyen to
int kiemTraNT(int x)
{
    int i;

    if (x < 2)
        return 0;

    for (i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }

    return 1;
}

// c. Dem so nguyen to
void isPrime(int a[], int n)
{
    int i;
    int demPrime = 0;

    for (i = 0; i < n; i++)
    {
        if (kiemTraNT(a[i]) == 1)
            demPrime++;
    }

    printf("So luong so nguyen to trong mang la: %d\n", demPrime);
}

// Trung binh cong cac so le
void average_odd(int a[], int n)
{
    int tong_le = 0;
    int tongheso = 0;
    float tbc_le;
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            tong_le += a[i];
            tongheso += 1;
        }
    }

    if (tongheso > 0)
    {
        tbc_le = (float)tong_le / tongheso;
        printf("Trung binh cong cac so le la: %.2f\n", tbc_le);
    }
    else
    {
        printf("Mang khong co so le.\n");
    }
}

void ktchinhphuong(int a[], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j * j <= a[i]; j++)
        {
            if (j * j == a[i])
            {
                printf("Mang co so chinh phuong");
                return;
            }
        }
    }

    printf("Mang khong co so chinh phuong");
}

void kt_even(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("\nMang khong toan chan");
            return;
        }
    }

    printf("\nMang toan chan");
}

void kt_chanxenle(int a[], int n)
{
    int i;

    for (i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 == a[i + 1] % 2)
        {
            printf("\nMang khong xen ke chan le");
            return;
        }
    }

    printf("\nMang xen ke chan le");
}

void tim_max(int a[], int n)
{
    int i;
    int max = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    printf("\nSo lon nhat trong mang la %d", max);
}

void tim_evenmax(int a[], int n)
{
    int i;
    int max;
    int timThay = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (timThay == 0 || a[i] > max)
            {
                max = a[i];
                timThay = 1;
            }
        }
    }

    if (timThay == 1)
        printf("\nSo chan lon nhat la: %d", max);
    else
        printf("\nMang khong co so chan");
}

void tim_duongmin(int a[], int n)
{
    int i;
    int min;
    int timThay = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] <= 0)
            continue;

        if (timThay == 0)
        {
            min = a[i];
            timThay = 1;
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }

    if (timThay == 1)
        printf("\nSo duong nho nhat trong mang la %d", min);
    else
        printf("\nMang khong co so duong");
}

void sapxep_giamdan(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep giam dan: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void tim_soprimedau(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (kiemTraNT(a[i]) == 1)
        {
            printf("\nSo nguyen to dau tien la: %d", a[i]);
            return;
        }
    }

    printf("\nMang khong co so nguyen to");
}

void lietKeLonHonX(int a[], int n, int x)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] > x)
            printf("%d ", a[i]);
    }
}

void demLonHonX(int a[], int n, int x)
{
    int i, dem = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] > x)
            dem++;
    }

    printf("So phan tu lon hon x: %d", dem);
}

void themCuoi(int a[], int *n, int y)
{
    if (*n >= 100)
    {
        printf("\nMang da day, khong the them!");
        return;
    }

    a[*n] = y;
    (*n)++;
}

void xoaDau(int a[], int *n)
{
    int i;

    if (*n <= 0)
        return;

    for (i = 0; i < *n - 1; i++)
        a[i] = a[i + 1];

    (*n)--;
}

void suaThanh0(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}

void tachMang(int a[], int n, int b[], int *nb,
              int c[], int *nc)
{
    int i;

    *nb = 0;
    *nc = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            b[(*nb)++] = a[i];
        else
            c[(*nc)++] = a[i];
    }
}

void sapXepChanTangLeGiam(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((a[i] % 2 != 0 && a[j] % 2 == 0) ||
                (a[i] % 2 == a[j] % 2 && a[i] > a[j] &&
                 a[i] % 2 == 0) ||
                (a[i] % 2 != 0 && a[j] % 2 != 0 &&
                 a[i] < a[j]))
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    int a[100];
    int b[100], c[100];
    int nb, nc;
    int x, y;
    int i;

    do
    {
        printf("Nhap so phan tu n (0 < n < 100): ");
        scanf("%d", &n);

        if (n <= 0 || n >= 100)
            printf("So n khong hop le! Vui long nhap lai.\n");

    } while (n <= 0 || n >= 100);

    printf("Nhap cac phan tu cua mang:\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nMang vua nhap la: ");

    for (i = 0; i < n; i++)
        printf("[%d] ", a[i]);

    printf("\n\n");

    // Cac ham xu ly mang ban dau
    tongchan(a, n);
    demsole(a, n);
    isPrime(a, n);
    average_odd(a, n);
    ktchinhphuong(a, n);
    kt_even(a, n);
    kt_chanxenle(a, n);
    tim_max(a, n);
    tim_evenmax(a, n);
    tim_duongmin(a, n);
    tim_soprimedau(a, n);

    sapxep_giamdan(a, n);

    printf("\nNhap x: ");
    scanf("%d", &x);

    lietKeLonHonX(a, n, x);
    printf("\n");
    demLonHonX(a, n, x);

    printf("\nNhap y: ");
    scanf("%d", &y);

    themCuoi(a, &n, y);

    printf("\nMang sau khi them y: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    tachMang(a, n, b, &nb, c, &nc);

    printf("\nMang chan: ");

    for (i = 0; i < nb; i++)
        printf("%d ", b[i]);

    printf("\nMang le: ");

    for (i = 0; i < nc; i++)
        printf("%d ", c[i]);

    sapXepChanTangLeGiam(a, n);

    printf("\nMang chan tang, le giam: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    xoaDau(a, &n);

    printf("\nMang sau khi xoa dau: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    suaThanh0(a, n);

    printf("\nMang sau khi sua thanh 0: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
