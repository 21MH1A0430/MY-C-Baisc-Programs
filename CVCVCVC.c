#include <stdio.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void process_string(char* str) {
    while (*str != '\0') {
        if (is_vowel(*str)) {
            if (is_vowel(*(str + 1))) {
                printf("V");
                str++;
            } else {
                printf("V");
            }
        } else if (isalpha(*str)) {
            if (!is_vowel(*(str + 1)) && isalpha(*(str + 1))) {
                printf("C");
                str++;
            } else {
                printf("C");
            }
        }
        str++;
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    process_string(str);
    return 0;
}
