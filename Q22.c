#include <stdio.h>

int main() {
    char word[21];
    int z = 0, o = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'z') {
            z++;
        }
        if (word[i] == 'o') {
            o++;
        }
    }

    if (2 * z == o) {
        printf("Yes");
    }
    if (2 * z != o) {
        printf("No");
    }

    return 0;
}