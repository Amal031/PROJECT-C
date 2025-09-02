#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sorting(int a[255], char *s) {
    for (int i = 0; s[i]; i++)
        a[(unsigned char)s[i]]++;
}

int anagram(int a[255], int b[255]) {
    for (int i = 0; i < 255; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: ./a.out <string1> <string2>\n");
        return 1;
    }

    printf("Input: %s %s\n", argv[1], argv[2]);

    if (strlen(argv[1]) != strlen(argv[2])) {
        printf("Not an anagram .\n");
        return 0;
    }

    int a[255] = {0}, b[255] = {0};
    sorting(a, argv[1]);
    sorting(b, argv[2]);

    if (anagram(a, b))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
