#include<stdio.h>
#include<stdlib.h>

void sorting(int a[255], char *s) {
    int i = 0;
    for (i = 0; s[i]; i++)
        a[(unsigned char)s[i]]++;
}

int len(char *s) {
    int len = 0;
    for (len = 0; s[len]; len++);
    return len;
}

int anagram(int a[255], int b[255]) {
    int i = 0;
    for (i = 0; i < 255; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("usage: ./a.out string1 string2\n");
        return 0;
    }

    printf("%s %s\n", argv[1], argv[2]);
    int a[255] = {0}, b[255] = {0};
    sorting(a, argv[1]);
    sorting(b, argv[2]);

    int l1 = len(argv[1]);
    int l2 = len(argv[2]);
    if (l1 != l2) {
        printf("not anagram\n");
        return 0;
    }

    if (anagram(a, b))
        printf("two strings are anagram\n");
    else
        printf("not anagram\n");

    return 0;
}
