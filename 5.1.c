/*
 * Bài 5.1: In mảng theo thứ tự đảo ngược và tính tổng
 * Input:
 *   - Dòng 1: n (số phần tử)
 *   - Dòng 2: n số nguyên cách nhau dấu cách
 * Output:
 *   - Dòng 1: các phần tử đảo ngược
 *   - Dòng 2: tổng các phần tử
 * Nếu n <= 0 -> in "Error"
 *
 * Ví dụ: 5 / 1 2 3 4 5 -> "5 4 3 2 1" và "15"
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error\n");
        return 0;
    }

    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // In mảng đảo ngược
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", a[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    // Tính và in tổng
    long long tong = 0;
    for (int i = 0; i < n; i++) tong += a[i];
    printf("%lld\n", tong);

    return 0;
}
