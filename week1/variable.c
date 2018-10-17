#include <stdio.h>

int main() {
    /* 类型关键字  变量名 */
    int i;
    float f;
    double d;
    long double ld;
    long l;
    long long ll;
//    void v;
    char c;

    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;
    unsigned char uchar;

    /* 这些语句都是赋值语句 */
    i = 1;
    f = 1.111 + 1.1111;
    d = 1.111 + 1.1111;
    c = 'c';

    ui = -1;
    uchar = -1;

    /* 这两句负责输出 */
    printf("%d %lf %lf %c \n", i, f, d, c);
    printf("%u, %d\n", ui, uchar);

    printf("char   %lu\n", sizeof(char));
    printf("int    %lu\n", sizeof(int));
    printf("long   %lu\n", sizeof(long));
    printf("float  %lu\n", sizeof(float));
    printf("double %lu\n", sizeof(double));


    return 0;
}