#include <stdio.h>

int main() {
    int x;
    printf("Please input a number: ");
    scanf("%d", &x);

    /*
     * if statement
    if (x < 0) {
        printf("x < 0\n");
    } else if (x == 0) {
        printf("x = 0\n");
    } else {
        printf("x > 0\n");
    }
    */

    /*
     * switch case
    switch (x) {
        case 0:
            printf("x = 0");
        case 1:
            printf("x = 1");
        default:
            printf("x != 0 or 1");
    }
    */

    /*
     * ?:
    x > 0 ? x = 1 : x < 0 ? x = -1 : x;
    printf("%d\n", x);
    */
    return 0;
}