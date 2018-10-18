#include <stdio.h>

int exponential(int base, int exp) {
    int ans = 1;
    for(int i = 0; i < exp; i++) {
        ans *= base;
    }
    return ans;
}

int main() {
    printf("%d\n", exponential(3, 3));
    return 0;
}