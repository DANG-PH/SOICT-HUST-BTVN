/*
 * Bài 4.1: Tính giai thừa n!
 * - Nhập số nguyên n < 8
 * - Sử dụng vòng lặp for
 * - Nếu dữ liệu không hợp lệ -> in "ERROR"
 */
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n (n < 8): ");
    scanf("%d", &n);

    // Kiểm tra điều kiện: n phải >= 0 và < 8
    if (n < 0 || n >= 8) {
        printf("ERROR\n");
        return 0;
    }

    long long giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua *= i;
    }

    printf("%d! = %lld\n", n, giai_thua);
    return 0;
}
