#include <stdio.h>
#include <string.h>

int isPalindrome(char str[],int len){
    char new_str[100] = make_new_str(str, len);
    len = strlen(new_str);
    for(int i = 0; i < len; i++){
        if(new_str[i] != new_str[len - i - 1]){
            return 0;
        }
        else{
            continue;
        }
    }
}

char *make_new_str(char *const str[], int len){
    char *no_empty_str[] = malloc(len * sizeof(char));
    int j = 0;
    for(int i = 0; i < len; i++){
        if(str[i] != ' '){
            no_empty_str[j++] = str[i];
        }
        return no_empty_str[j];
    }
}

int main(void) {
    char str[30];
    scanf("%[^\n]s", str);

    
    int len = strlen(str);
    if(isPalindrome(str, len)){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }

    return 0;
}