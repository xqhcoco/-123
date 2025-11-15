
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
long long para(long long* arr, long long n, long long mid)
{
	long long duanshu=0;//所能切割的段数
	for (long long i = 0; i < n; i++) {
		duanshu += arr[i] / mid;
	}
	return duanshu;
}
int main()
{
	int n;
	long long k;
	long long total_length=0;//所有木材的总长度
	scanf("%d %lld", &n, &k);
	long long* arr = (long long*)malloc(n * sizeof(long long));
	long long max_length=0;
	long long left = 1;
	long long right = 0;
	total_length = 0;
	long long ans = 0;//最终结果
	for (long long i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
		total_length += arr[i];
		if (i == 0 || arr[i] < max_length)//能切割出的最大长度，即所有木材中的最小长度
			max_length = arr[i];
	}
	if (total_length<k) {
		printf("0");
		free(arr);
		return 0;
	}
	right = max_length;
	long long mid = 0;
	while (left <= right) {
		mid = left + (right - left) / 2;
		if (para(arr, n, mid) >= k) {
			left = mid + 1;
			ans = mid;
		}
		else {
				right = mid - 1;
		}
	}
	printf("%lld", ans);
	free(arr);
	return 0;
}