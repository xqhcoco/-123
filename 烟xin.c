#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int newyan(int num,int k)
{
    int new = num / k;
    return new;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int sum = n;
    int temp = n;
    while (temp >= k) {
        sum += newyan(temp,k);
        temp /= k;
    }
    printf("%d", sum);
    return 0;
}