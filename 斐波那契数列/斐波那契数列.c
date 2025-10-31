//输出斐波那契（Fibonacci）数列（1, 1, 2, 3, 5, 8, 13……）的前20项
//每个数输出占8列。

#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;//定义a,b
	printf("%8d", a);
	printf("%8d", b);
	for (int i = 3; i <= 20; i++)	//运用for循环，项数从2开始
	{   
		int sum = 0;				//定义a,b之和为sum,sum为下一项//更新a,b.a=上一轮的b，b为上一轮的sum				
		sum = a + b;				//更新a,b.a=上一轮的b，b为上一轮的sum	
		a = b;						//每得到一个sum就将其输出并占8列
		b = sum;
		printf("%8d", sum);
	}								
	return 0;
}