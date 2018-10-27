#include <stdio.h>

int up_table() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (j >= i) {
                printf("%d * %d = %d\t", i, j, i*j);
            } else {
                printf("\t\t\t");
            }
        }
        printf("\n");
    }
    return 0;
}

int down_table() {
    for (int i = 1; i < 10; i++) {
        for (int b = 1; b < 10 - i; b++) {
            printf("\t\t\t");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    down_table();
    return 0;
}