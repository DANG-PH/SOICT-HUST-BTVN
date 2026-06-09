/*
 * Bài 4.6: Tính các tổng sau
 * a) S1 = 1 + x + x^2 + x^3 + ... + x^n
 * b) S2 = 1 - x + x^2 - x^3 + ... + (-1)^n * x^n
 * c) S3 = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!
 *
 * - n là số nguyên dương, x là số thực bất kỳ
 * - Sử dụng vòng lặp while
 * - Nếu n không hợp lệ -> in "ERROR"
 */
#include <stdio.h>

int main() {
    int n;
    double x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);

    // Kiểm tra điều kiện: n phải là số nguyên dương
    if (n <= 0) {
        printf("ERROR\n");
        return 0;
    }

    // S1 = 1 + x + x^2 + ... + x^n
    double S1 = 1.0;
    double term = 1.0;
    int i = 1;
    while (i <= n) {
        term *= x;     // x^i
        S1 += term;
        i++;
    }

    // S2 = 1 - x + x^2 - x^3 + ... + (-1)^n * x^n
    double S2 = 1.0;
    term = 1.0;
    i = 1;
    while (i <= n) {
        term *= -x;    // (-1)^i * x^i
        S2 += term;
        i++;
    }

    // S3 = 1 + x/1! + x^2/2! + ... + x^n/n!
    double S3 = 1.0;
    term = 1.0;
    i = 1;
    while (i <= n) {
        term *= x / i; // x^i / i!  (tính lũy tiến từ số hạng trước)
        S3 += term;
        i++;
    }

    printf("S1 = %.4f\n", S1);
    printf("S2 = %.4f\n", S2);
    printf("S3 = %.4f\n", S3);

    return 0;
}
