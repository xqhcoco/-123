/*本题要求将给定的n个整数从大到小排序后输出。

输入格式：
输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

输出格式：
在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[10];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		int maxjb = i;               //定义最大值下角标为i
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[maxjb]) {
				maxjb = j;           //每次判断寻找最大值的下角标，利用下角标完成数组元素之间的交换
			}
		}
			int temp;
			temp = arr[maxjb];     //交换最大值与当前元素的位置
			arr[maxjb] = arr[i];
			arr[i] = temp;
	}
		for (int i = 0; i < n; i++) {
			printf("%d", arr[i]);
			if (i != n - 1) {
				printf(" ");
			}
		}
	return 0;
}