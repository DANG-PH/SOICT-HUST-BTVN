/*
 * Bài 5.7: Chuẩn hóa câu tiêu đề
 * - Xóa các dấu cách thừa ở đầu, cuối, và giữa các từ
 * - Giữa 2 từ chỉ còn đúng 1 dấu cách
 *
 * Ví dụ: "h  ell  o"  ->  "h ell o"
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[10005];

    // Đọc cả dòng (có chứa dấu cách)
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;

    // Bỏ ký tự '\n' ở cuối nếu có
    s[strcspn(s, "\n")] = '\0';

    int len = (int)strlen(s);
    int i = 0, j = 0;

    // Bỏ qua các dấu cách ở đầu
    while (i < len && s[i] == ' ') i++;

    // Duyệt phần còn lại: nếu là dấu cách thì chỉ giữ 1 dấu cách
    int truoc_la_cach = 0;
    while (i < len) {
        if (s[i] == ' ') {
            if (!truoc_la_cach) {
                s[j++] = ' ';
                truoc_la_cach = 1;
            }
        } else {
            s[j++] = s[i];
            truoc_la_cach = 0;
        }
        i++;
    }

    // Bỏ dấu cách cuối (nếu có)
    if (j > 0 && s[j - 1] == ' ') j--;
    s[j] = '\0';

    printf("%s\n", s);
    return 0;
}
