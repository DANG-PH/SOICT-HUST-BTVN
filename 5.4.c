/*
 * Bài 5.4: Tích 2 phần tử liên tiếp lớn nhất
 * - Mảng có tối đa 10 phần tử, 2 <= n <= 10
 * - Nếu mảng chỉ có 1 phần tử thì trả về 0
 * - Nếu tích lớn nhất là số âm thì trả về 0
 *
 * Ví dụ: 5 / 1 9 3 2 6  ->  27   (vì 9*3 = 27 lớn nhất)
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

    // Tìm tích lớn nhất của 2 phần tử liên tiếp
    int tich_max = a[0] * a[1];
    for (int i = 1; i < n - 1; i++) {
        int tich = a[i] * a[i + 1];
        if (tich > tich_max) tich_max = tich;
    }

    // Nếu tích lớn nhất < 0 -> trả về 0
    if (tich_max < 0) tich_max = 0;

    printf("%d\n", tich_max);
    return 0;
}
