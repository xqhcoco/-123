//���쳲�������Fibonacci�����У�1, 1, 2, 3, 5, 8, 13��������ǰ20��
//ÿ�������ռ8�С�

#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;//����a,b
	printf("%8d", a);
	printf("%8d", b);
	for (int i = 3; i <= 20; i++)	//����forѭ����������2��ʼ
	{   
		int sum = 0;				//����a,b֮��Ϊsum,sumΪ��һ��//����a,b.a=��һ�ֵ�b��bΪ��һ�ֵ�sum				
		sum = a + b;				//����a,b.a=��һ�ֵ�b��bΪ��һ�ֵ�sum	
		a = b;						//ÿ�õ�һ��sum�ͽ��������ռ8��
		b = sum;
		printf("%8d", sum);
	}								
	return 0;
}