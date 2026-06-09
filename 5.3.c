/*
 * Bài 5.3: Sắp xếp mảng theo thứ tự tăng dần
 * Input:
 *   - Dòng 1: n
 *   - Dòng 2: n số nguyên
 * Output: Các phần tử in ra thành 1 dòng, cách nhau 1 dấu cách
 *
 * Ví dụ: 5 / 1 4 3 5 2  ->  "1 2 3 4 5"
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sắp xếp tăng dần bằng thuật toán Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) min_idx = j;
        }
        if (min_idx != i) {
            int tmp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = tmp;
        }
    }

    // In kết quả
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
