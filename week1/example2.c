#include <stdio.h>
#include <stdlib.h>

int main() {
    char op;
    float data1, data2;
    scanf("%f%c%f", &data1, &op, &data2);
    if (op!='+' || op!='-' || op!='*' || op!='/')
        printf("Error\n");
    else if (op=='+')
        printf("%.2f%c%.2f=%.2f\n", data1, op, data2, data1+data2);
    else if (op=='-')
        printf("%.2f%c%.2f=%.2f\n", data1, op, data2, data1-data2);
    else if (op=='*')
        printf("%.2f%c%.2f=%.2f\n", data1, op, data2, data1*data2);
    else if (op=='/')
    {
        if (data2 == 0)
            printf("dat is 0! Error!\n");
        else
            printf("%.2f%c%.2f=%.2f\n", data1, op, data2, data1/data2);
    }
    return 0;
}