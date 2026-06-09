/*
 * Bài 5.2: Trung bình cộng các số âm và tổng các số dương
 * Input:
 *   - Dòng 1: n
 *   - Dòng 2: n số nguyên
 * Output:
 *   - 1 dòng gồm 2 giá trị, mỗi kết quả 6 số sau dấu phẩy
 *   - Nếu không có số âm: "Mang khong co so am"
 *   - Nếu không có số dương: "Mang khong co so duong"
 *
 * Ví dụ: 3 / 1 2 3       -> "Mang khong co so am 6.000000"
 *        2 / 295 -492    -> "-492.000000 295.000000"
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    double tong_am = 0;
    int dem_am = 0;
    double tong_duong = 0;
    int dem_duong = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            tong_am += a[i];
            dem_am++;
        } else if (a[i] > 0) {
            tong_duong += a[i];
            dem_duong++;
        }
    }

    // Phần trung bình số âm
    if (dem_am == 0) {
        printf("Mang khong co so am ");
    } else {
        printf("%.6f ", tong_am / dem_am);
    }

    // Phần tổng số dương
    if (dem_duong == 0) {
        printf("Mang khong co so duong\n");
    } else {
        printf("%.6f\n", tong_duong);
    }

    return 0;
}
