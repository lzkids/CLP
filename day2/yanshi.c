#include <stdio.h>

int main()
{

    int a = 520;
    char b = 'f';
    float c = 3.14;
    double d = 3.1415926;

    printf("想想看是%d\n", a);
    printf("i  %cirst one\n", b);
    printf("圆周率是：%2f\n", c);
    printf("精确到小数点后9位的圆周率是：%11.9f\n", d);

    return 0;
}