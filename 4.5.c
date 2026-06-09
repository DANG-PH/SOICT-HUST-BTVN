/*
 * Bài 4.5: Giải và biện luận phương trình bậc 2: ax^2 + bx + c = 0
 * - Nhập 3 số thực a, b, c
 * - Xét cả trường hợp a = 0 và nghiệm phức
 * - Nếu có 2 nghiệm phân biệt: hiển thị nghiệm lớn trước
 */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Trường hợp a = 0 -> phương trình bậc 1: bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            printf("Phuong trinh co 1 nghiem: x = %.4f\n", -c / b);
        }
    }
    // Trường hợp a != 0 -> phương trình bậc 2
    else {
        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            // 2 nghiệm phân biệt
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            // Đảm bảo nghiệm lớn in trước
            double lon = (x1 > x2) ? x1 : x2;
            double be  = (x1 > x2) ? x2 : x1;
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.4f\n", lon);
            printf("x2 = %.4f\n", be);
        }
        else if (delta == 0) {
            // Nghiệm kép
            printf("Phuong trinh co nghiem kep: x = %.4f\n", -b / (2 * a));
        }
        else {
            // Nghiệm phức
            double phan_thuc = -b / (2 * a);
            double phan_ao   = sqrt(-delta) / (2 * a);
            printf("Phuong trinh co 2 nghiem phuc:\n");
            printf("x1 = %.4f + %.4fi\n", phan_thuc, phan_ao);
            printf("x2 = %.4f - %.4fi\n", phan_thuc, phan_ao);
        }
    }

    return 0;
}
