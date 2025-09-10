#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *make_new_str(const char *str, int len) {
    char *no_empty_str = malloc((len + 1) * sizeof(char)); // +1 for '\0'
    if (!no_empty_str) return NULL;

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {            // 공백 제거
            no_empty_str[j++] = str[i];
        }
    }
    no_empty_str[j] = '\0';
    return no_empty_str;
}

int isPalindrome(const char *str, int len) {
    char *new_str = make_new_str(str, len);
    if (!new_str) return 0;

    int new_len = strlen(new_str);
    for (int i = 0; i < new_len / 2; i++) {
        if (new_str[i] != new_str[new_len - 1 - i]) {
            free(new_str);
            return 0;
        }
    }
    free(new_str);
    return 1;
}

int main(void) {
    char str[30];
    scanf(" %29[^\n]", str);  // 최대 29글자 입력

    int len = strlen(str);
    if (isPalindrome(str, len)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
