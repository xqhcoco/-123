//计算 1！ + 2！ + ... + n！

//输入：整数n
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;//定义n
	int i;//定义i
	int sum = 0;
	int temp = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		temp *= i;//for循环i<=n				//定义temp=1，temp=temp*i			
		sum += temp;			//定义sum存放每次相加后的结果，sum=0,sum=sum+temp
	}										
	printf("%d", sum);
	return 0;
}