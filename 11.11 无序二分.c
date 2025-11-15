#include<stdio.h>
int main()
{
	int arr[10] = { 2,3,7,5,8,6,1,4,9,0 };
	int ans = 0;
	if (arr[0] > arr[1]) {
		ans = 0;
		printf("峰值下标为%d",ans);
		return 0;
	}
	if (arr[9] > arr[8]) {
		ans = 9;
		printf("峰值下标为%d",ans);
		return 0;
	}
	int left = 0;
	int right = 9;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] < arr[mid - 1]) {
			right = mid - 1;
		}
		else {
			if (arr[mid] < arr[mid + 1]) {
				left = mid + 1;
			}
			else {
				
				printf("峰值下标为%d",mid);
				break;
			}
		}
	}
	return 0;
}