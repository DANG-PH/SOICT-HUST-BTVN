/*
 * Bài 4.2: Kiểm tra số nguyên tố
 * - Nhập số nguyên n
 * - Kiểm tra n có phải số nguyên tố không
 */
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // Số nguyên tố phải >= 2
    if (n < 2) {
        printf("Khong phai la so nguyen to\n");
        return 0;
    }

    int la_nguyen_to = 1;
    // Chỉ cần kiểm tra đến sqrt(n) để tối ưu
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            la_nguyen_to = 0;
            break;
        }
    }

    if (la_nguyen_to) {
        printf("La so nguyen to\n");
    } else {
        printf("Khong phai la so nguyen to\n");
    }

    return 0;
}
