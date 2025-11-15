/*2021 这个数字非常特殊, 它的千位和十位相等, 个位比百位大 1，我们称满足这样条件的年份为特殊年份。

输入 5 个年份，请计算这里面有多少个特殊年份。

输入格式
输入 5 行，每行一个 4 位十进制数（数值范围为 1000 至 9999)，表示一个年份。

输出格式
输出一个整数，表示输入的 5 个年份中有多少个特殊年份。*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &year);
		int ge = year % 10;
		int shi = year / 10 % 10;
		int bai = year / 100 % 10;
		int qian = year / 1000;
		if (shi == qian && ge == bai + 1) {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}