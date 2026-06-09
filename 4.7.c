/*
 * Bài 4.7: Tính các biểu thức
 *   S1 = sqrt(x + sqrt(x + sqrt(x + ... + sqrt(x))))   (n dấu căn bậc 2)
 *   S2 = 1 + x + x^2/2  + x^3/3  + ... + x^n/n
 *   S3 = 1 + x + x^2/2! + x^3/3! + ... + x^n/n!
 *   S4 = 1 - x + x^2/2! - x^3/3! + ... + (-1)^n * x^n / n!
 *
 * - Hiển thị 4 số trên 1 dòng, 4 số sau dấu phẩy
 * - Nếu n < 1 hoặc x < 0 -> in "Error"
 *   (vì căn bậc 2 yêu cầu x >= 0 và phải có ít nhất 1 dấu căn)
 */
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);

    // Kiểm tra điều kiện
    if (n < 1 || x < 0) {
        printf("Error\n");
        return 0;
    }

    // S1: căn lồng nhau với n dấu căn
    // Tính từ trong ra ngoài: bắt đầu với sqrt(x), sau đó lặp sqrt(x + S1)
    double S1 = sqrt(x);
    for (int i = 2; i <= n; i++) {
        S1 = sqrt(x + S1);
    }

    // S2 = 1 + x + x^2/2 + x^3/3 + ... + x^n/n
    double S2 = 1.0;
    double x_mu = 1.0;          // x^i
    for (int i = 1; i <= n; i++) {
        x_mu *= x;
        S2 += x_mu / i;
    }

    // S3 = 1 + x + x^2/2! + x^3/3! + ... + x^n/n!
    double S3 = 1.0;
    double term = 1.0;          // x^i / i!
    for (int i = 1; i <= n; i++) {
        term *= x / i;
        S3 += term;
    }

    // S4 = 1 - x + x^2/2! - x^3/3! + ... + (-1)^n * x^n / n!
    double S4 = 1.0;
    term = 1.0;                 // (-1)^i * x^i / i!
    for (int i = 1; i <= n; i++) {
        term *= -x / i;
        S4 += term;
    }

    // In 4 số trên 1 dòng, 4 chữ số sau dấu phẩy
    printf("%.4f %.4f %.4f %.4f\n", S1, S2, S3, S4);

    return 0;
}
