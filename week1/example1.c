#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("请输入三角形三边长,a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);
    if (a+b>c && b+c>a && a+c>b)
    {
        s = (a + b + c) / 2;
        area = (float) sqrt(s * (s-a) * (s-b) * (s-c));
        printf("area=%f\n", area); 
    }
    else 
    {
        printf("不能构成三角形\n");
    }
    return 0;
}