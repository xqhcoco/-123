/*现有 m 所学校，每所学校预计分数线是 a
i
?
。有 n 位学生，估分分别为 b
i
?
。

根据 n 位学生的估分情况，分别给每位学生推荐一所学校，要求学校的预计分数线和学生的估分相差最小（可高可低，毕竟是估分嘛），这个最小值为不满意度。求所有学生不满意度和的最小值。

输入格式
第一行读入两个整数 m, n。

第二行共有 m 个数，表示 m 个学校的预计录取分数。

第三行有 n 个数，表示 n 个学生的估分成绩。

输出格式
输出一行，为最小的不满度之和。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int compare(const void* a, const void* b)
{
	int* pa = (int*)a;
	int* pb = (int*)b;
	int num1 = *pa;
	int num2 = *pb;
	return num1 - num2;
}
int lack(int* arr, int m, int score)
{
	int left = 0;
	int right = m - 1;
	int firstbig = m;
	int remove=0;//预计录取分数与估分的差,不满意度
	int mid = 0;
	int result = 0;
	int min_result = 0;
	while (left <= right) {
		mid = left + (right - left) / 2;
		remove = abs(arr[mid] - score);
		if (arr[mid] >= score) {
			firstbig = mid;
			right = mid - 1;
		}
		else {
			if (arr[mid] < score) {
				left = mid + 1;
			}
		}
	}
		min_result = abs(arr[firstbig] - score);
	if (firstbig > 0) {
		result = abs(arr[firstbig - 1] - score);
		if (result < min_result) {
			min_result = result;
		}
	}
	return min_result;
}
int main()
{
	int m, n;
	long long sum = 0;
	scanf("%d %d", &m, &n);
	int* arr = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
	}
	if (arr != NULL) {
		qsort(arr, m, sizeof(int), compare);
	}
	for (int i = 0; i < n; i++) {
		int p;
		scanf("%d", &p);
		sum += lack(arr, m, p);
	}
	printf("%lld", sum);
	free(arr);
	return 0;

}