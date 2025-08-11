#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];

    printf("Enter a string (max 999 chars):\n");
    if (!fgets(s, sizeof(s), stdin)) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }


    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        --len;
    }

    for (size_t i = 0; i < len / 2; ++i) {
        char tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }

    printf("Reversed string:\n%s\n", s);
    return 0;
}
