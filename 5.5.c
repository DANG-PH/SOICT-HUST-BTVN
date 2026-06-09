/*
 * Bài 5.5: Tổng 2 phần tử liên tiếp lớn nhất
 * - Mảng có tối đa 10 phần tử, 2 <= n <= 10
 * - Nếu mảng chỉ có 1 phần tử thì trả về 0
 * - Nếu tổng lớn nhất là số âm thì trả về 0
 *
 * Ví dụ: 5 / 1 9 3 2 6  ->  12   (vì 9+3 = 12 lớn nhất)
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[20];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Mảng chỉ có 1 phần tử -> trả về 0
    if (n < 2) {
        printf("0\n");
        return 0;
    }

    // Tìm tổng lớn nhất của 2 phần tử liên tiếp
    int tong_max = a[0] + a[1];
    for (int i = 1; i < n - 1; i++) {
        int tong = a[i] + a[i + 1];
        if (tong > tong_max) tong_max = tong;
    }

    // Nếu tổng lớn nhất < 0 -> trả về 0
    if (tong_max < 0) tong_max = 0;

    printf("%d\n", tong_max);
    return 0;
}
