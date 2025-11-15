/*吃香蕉问题
1.估计最终答案可能存在的范围
  最小且达标的速度[1,r]
2.问题的答案和给定条件的单调性
  速度大，耗费小时少或不变
  速度小，耗费小时多或不变
3.建立函数，当答案固定情况下判断给定条件是否达标
  通过二分得到的速度再函数中判断所耗费的小时数是否达标
4.不断进行二分搜索，调用函数判断，直到二分结束找到合适的答案*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int time(int* arr, int mid, int n)
{
	int total_time = 0;
	for (int i = 0; i < n; i++) {
		total_time += (arr[i] + mid - 1) / mid;
	}
	return total_time;
	
}
int main()
{
	int n;
	int h;//管理员回来需要的时间
	scanf("%d %d",&n,&h);
	int* piles = (int*)malloc(n * sizeof(int));
	int max=0;
	for (int i = 0; i < n; i++) {
		scanf("%d",&piles[i]);
		max = (piles[i] > max) ? piles[i] : max;//找出数组中的最大速度，确定速度范围
	}
	int left = 1;
	int right = max;//速度范围left-right
	int mid;//二分法得到的速度
	int ans = 0;//记录达标的答案
	while (left <= right) {//开始用二分法确定速度
		mid = (left + right) / 2;//或者left+(right-left)/2
		if (time(piles, mid,n)<=h) {
			right = mid - 1;
			ans = mid;
		}
		else {
			left = mid + 1;
		}
	}
	printf("%d", ans);
	free(piles);//记得释放内存
	piles = NULL;

	return 0;
}