//��n����n����������Ϊ������n < 10��

//	�����ʽ :
//ֱ������һ��nֵ��û�������κθ����ַ���

//�����ʽ :
//ֱ����������û���������Ӹ�ʽ���ַ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	printf("%d", sum);

	return 0;
}