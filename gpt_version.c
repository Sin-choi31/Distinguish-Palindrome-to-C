#include <stdio.h>
#include <string.h>

int is_pal_ignore_space(const char *s) {
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        while (i < j && s[i] == ' ') i++;  // 앞쪽 공백 건너뜀
        while (i < j && s[j] == ' ') j--;  // 뒤쪽 공백 건너뜀

        if (s[i] != s[j]) return 0;        // 불일치 → 회문 아님
        i++;
        j--;
    }
    return 1;  // 끝까지 문제 없으면 회문
}

int main(void) {
    char str[1000];              // 입력 문자열 저장 공간
    scanf("%[^\n]", str);        // 엔터 나오기 전까지 전체 문자열 입력받기

    if (is_pal_ignore_space(str))
        printf("1");
    else
        printf("0");

    return 0;
}