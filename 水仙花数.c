//��ӡˮ�ɻ�����ˮ�ɻ�����һ����λ�������λ���ֵ���������ԭ����ȡ�

//�����ʽ :
//������˳���������ˮ�ɻ�����ÿ�������ռ5�С�


#include<stdio.h>
int main()
{
	int n;								//����n
	for (n = 100; n < 1000; n++) {						//ѭ��n=100��ʼ��n<1000
		int ge, shi, bai;
		int i = n;
		int sum = 0;								//����ge,shi,bai;n%10����ÿλ��
		ge = i % 10;							//����sum��sumΪ��λ�����η��ĺ�
		i /= 10;							//if�ж�sum�Ƿ���ԭ����ͬ
		shi = i % 10;							//��ͬ�������ÿ����ռ5
		i /= 10;
		bai = i;
		sum = ge * ge * ge + shi * shi * shi + bai * bai * bai;
		if (sum == n) {
			printf("%5d", n);
		}
	}
	return 0;
}
