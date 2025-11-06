/*本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。

输入格式：
输入在第一行先给出非负整数N（ < 10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。

	输出格式：
	在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[10];
	int i;
	for ( i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &arr[i]);
	if (arr[n - 1] <= arr[n]) {				//考虑单独输入的那个数与原数组中最大值相等的情况
		for (int j = 0; j < n + 1; j++) {	//此时无需排列
			printf("%d ", arr[j]);
		}
		return 0;
	}
	for (int j = n; j >= 1; j--) {
			if (arr[j] <= arr[j - 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;

			}
		
	}
	for (int j = 0; j < n + 1; j++) {
		printf("%d ", arr[j]);
	}

	return 0;
}