//求 1 - 3 + 5 - 7 + …… - 99 + 101 的值。

//输出格式 :
//在一行中按照格式“s = result”顺序输出计算结果。

#include<stdio.h>
int main()
{
	int i;
	int cnt;
	int sum = 0;								//定义i=1
	for (cnt = 1;; cnt++)						//定义cnt为当前项数								
	{											//for循环,i=2*cnt-1
		i = 2 * cnt - 1;						//定义变量sum,用来存储累积计算的结果							// 定义sign来改变符号
		int sign = 1;							//if语句判断如果cnt%2==0,sign=-1;否则sign=1
		sign = (cnt % 2 == 0) ? -1 : 1;			//最终sum=sum+sign*i
		sum += sign * i;						//判断如果i=101跳出
		if (i == 101)break;						//输出
	}
	printf("s=%d", sum);

	return 0;
}