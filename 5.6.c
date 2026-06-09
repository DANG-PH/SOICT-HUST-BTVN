/*
 * Bài 5.6: Đếm số lần mỗi ký tự xuất hiện trong cả hai chuỗi S và T
 * Input:
 *   - Dòng 1: chuỗi S
 *   - Dòng 2: chuỗi T
 * Output:
 *   - Dòng 1: các ký tự riêng biệt xuất hiện trong S hoặc T,
 *     sắp xếp theo thứ tự tăng dần theo giá trị ASCII
 *   - Mỗi dòng tiếp theo: số lần xuất hiện của 1 ký tự (theo thứ tự dòng 1)
 *
 * Ví dụ: S = "b", T = "a"  ->  "ab" / "1" / "1"
 */
#include <stdio.h>
#include <string.h>

int main() {
    char S[1005], T[1005];

    // Đọc S và T, mỗi chuỗi 1 dòng (có thể chứa dấu cách)
    if (fgets(S, sizeof(S), stdin) == NULL) S[0] = '\0';
    if (fgets(T, sizeof(T), stdin) == NULL) T[0] = '\0';

    // Bỏ ký tự '\n' ở cuối nếu có
    S[strcspn(S, "\n")] = '\0';
    T[strcspn(T, "\n")] = '\0';

    // Đếm số lần xuất hiện của từng ký tự (256 mã ASCII)
    int dem[256] = {0};
    for (int i = 0; S[i] != '\0'; i++) dem[(unsigned char)S[i]]++;
    for (int i = 0; T[i] != '\0'; i++) dem[(unsigned char)T[i]]++;

    // Dòng 1: in các ký tự xuất hiện theo thứ tự ASCII tăng dần
    for (int c = 0; c < 256; c++) {
        if (dem[c] > 0) printf("%c", c);
    }
    printf("\n");

    // Các dòng tiếp theo: số lần xuất hiện
    for (int c = 0; c < 256; c++) {
        if (dem[c] > 0) printf("%d\n", dem[c]);
    }

    return 0;
}
