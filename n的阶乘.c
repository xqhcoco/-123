//求n！，n和运算结果均为整数，n < 10。

//	输入格式 :
//直接输入一个n值，没有其它任何附加字符。

//输出格式 :
//直接输出结果，没有其它附加格式和字符。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	printf("%d", sum);

	return 0;
}