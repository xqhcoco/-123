/*本题要求从输入的N个整数中查找给定的X。如果找到，输出X的位置（从0开始数）；如果没有找到，输出“Not Found”。

输入格式：
输入在第一行中给出两个正整数N（≤20）和X，第二行给出N个整数。数字均不超过长整型，其间以空格分隔。

输出格式：
在一行中输出X的位置，或者“Not Found”。
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	int arr[20];
	int find=0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (x == arr[i]) {
			printf("%d", i);
			find = 1;
		}
	}
	if (!find) {
		printf("Not Found");
	}
	return 0;
}