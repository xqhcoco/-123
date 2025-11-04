//一个数组A中存有N（ > 0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置
//每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。

//输出格式 :
//在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格

/*思路：
1.定义n,m,定义数组arr
2.for循环定义i,依次输入每个数字
3.定义逆序函数
4.将数组分成两个部分分别输入函数逆序
5.最后将数组逆序输出
*/
#include<stdio.h>
void Nixu(int start,int end,int arr[])
{
	
	while (start < end) {
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
int main()
{
	int n,m;
	int part1=0;
	int arr[100];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	m = m % n;//处理m>n时的情况
    if(m==0){
        for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
		if (i != n - 1) {
			printf(" ");
		}
	}
        printf("\n");
}else{
	Nixu(part1,n-1,arr);
	Nixu(part1,m-1,arr);
	Nixu(m, n - 1,arr);
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
		if (i != n - 1) {
			printf(" ");
		}
	}
    printf("\n");
}


	return 0;
}
