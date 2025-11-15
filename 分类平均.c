/*给定 n 和 k，将从 1 到 n 之间的所有正整数可以分为两类：A 类数可以被 k 整除（也就是说是 k 的倍数），而 B 类数不能。请输出这两类数的平均数，精确到小数点后 1 位，用空格隔开。

数据保证两类数的个数都不会是 0。

输入格式
输入两个正整数 n 与 k。

输出格式
输出一行，两个实数，分别表示 A 类数与 B 类数的平均数。精确到小数点后一位。*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	double true=0.0;
	double no=0.0;
	double avertrue;
	double averno;
	int cnt1=0, cnt2=0;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			true += i;
			cnt1++;
		}
		else {
			no += i;
			cnt2++;
		}
	}
	avertrue = true / cnt1;
	averno = no / cnt2;
	printf("%.1f %.1f", avertrue, averno);


	return 0;
}