//�� 1 - 3 + 5 - 7 + ���� - 99 + 101 ��ֵ��

//�����ʽ :
//��һ���а��ո�ʽ��s = result��˳�������������

#include<stdio.h>
int main()
{
	int i;
	int cnt;
	int sum = 0;								//����i=1
	for (cnt = 1;; cnt++)						//����cntΪ��ǰ����								
	{											//forѭ��,i=2*cnt-1
		i = 2 * cnt - 1;						//�������sum,�����洢�ۻ�����Ľ��							// ����sign���ı����
		int sign = 1;							//if����ж����cnt%2==0,sign=-1;����sign=1
		sign = (cnt % 2 == 0) ? -1 : 1;			//����sum=sum+sign*i
		sum += sign * i;						//�ж����i=101����
		if (i == 101)break;						//���
	}
	printf("s=%d", sum);

	return 0;
}