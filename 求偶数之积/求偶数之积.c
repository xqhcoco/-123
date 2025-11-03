//任意输入10个整数，求其中偶数之积。

//输入格式 :
//在一行中输入10个整数，数据之间只能用1个空格间隔。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int cnt;//记录个数
    int result=1;
    for (cnt = 0; cnt < 10; cnt++) {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0) {
            result *= n;
        }
    }
    printf("%d", result);
    return 0;
}