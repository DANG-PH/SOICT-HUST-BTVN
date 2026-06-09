/*
 * Bài 4.4: Tìm UCLN (ước số chung lớn nhất) và BCNN (bội số chung nhỏ nhất)
 * - Nhập 2 số nguyên dương a, b
 * - Sử dụng vòng lặp while
 * - Nếu dữ liệu không hợp lệ -> in "ERROR"
 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    // Kiểm tra điều kiện: a, b phải là số nguyên dương
    if (a <= 0 || b <= 0) {
        printf("ERROR\n");
        return 0;
    }

    // Tìm UCLN bằng thuật toán Euclid
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int ucln = x;

    // BCNN = (a * b) / UCLN
    long long bcnn = (long long)a * b / ucln;

    printf("UCLN(%d, %d) = %d\n", a, b, ucln);
    printf("BCNN(%d, %d) = %lld\n", a, b, bcnn);

    return 0;
}
