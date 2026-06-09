/*
 * Bài 4.3: Tính tổng các chữ số của một số nguyên dương < 1000
 * - Sử dụng vòng lặp while
 * - Nếu n >= 1000 hoặc n <= 0 -> in "ERROR"
 * Ví dụ: 123 -> 1 + 2 + 3 = 6
 */
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n (n < 1000): ");
    scanf("%d", &n);

    // Kiểm tra điều kiện: n phải là số nguyên dương và < 1000
    if (n <= 0 || n >= 1000) {
        printf("ERROR\n");
        return 0;
    }

    int tong = 0;
    int temp = n;
    while (temp > 0) {
        tong += temp % 10;   // Lấy chữ số hàng đơn vị
        temp /= 10;          // Bỏ chữ số hàng đơn vị
    }

    printf("Tong cac chu so cua %d la: %d\n", n, tong);
    return 0;
}
