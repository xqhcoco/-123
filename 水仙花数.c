//打印水仙花数。水仙花数是一个三位数，其各位数字的立方和与原数相等。

//输出格式 :
//按递增顺序输出所有水仙花数，每个数输出占5列。


#include<stdio.h>
int main()
{
	int n;								//定义n
	for (n = 100; n < 1000; n++) {						//循环n=100开始，n<1000
		int ge, shi, bai;
		int i = n;
		int sum = 0;								//定义ge,shi,bai;n%10分离每位数
		ge = i % 10;							//定义sum，sum为各位数三次方的和
		i /= 10;							//if判断sum是否与原数相同
		shi = i % 10;							//相同则输出，每个数占5
		i /= 10;
		bai = i;
		sum = ge * ge * ge + shi * shi * shi + bai * bai * bai;
		if (sum == n) {
			printf("%5d", n);
		}
	}
	return 0;
}
