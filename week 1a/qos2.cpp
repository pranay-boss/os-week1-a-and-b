#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1001];
    printf("Enter a string (max 1000 chars):\n");
    if (!fgets(s, sizeof(s), stdin)) return 0;


    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[--len] = '\0';
    }


    for (size_t i = 0, j = len ? len - 1 : 0; i < j; ++i, --j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    printf("Reversed: %s\n", s);
    return 0;
}
