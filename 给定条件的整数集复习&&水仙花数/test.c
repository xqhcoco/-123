/*#include<stdio.h>
#include<stdlib.h>			
int main()
{														����������������
	int A;										
	scanf_s("%d", &A);
	int num[] = { A,A + 1,A + 2,A + 3 };
	int count = 0;
	int* result = (int*)malloc(24 * sizeof(int));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if (i != j && i != k && j != k) {
					result[count++] = num[i] * 100 + num[j] * 10 + num[k];
				}
			}
		}
	}
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (result[j] > result[j + 1]) {
				int temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 24; i++) {
		printf("%d", result[i]);
		if ((i+1) % 6 != 0 || i == 23) {
			printf(" ");
		}
		else {
			printf("\n");
		}
	}
	return 0;
}*/

/*#include<stdio.h>									�žų˷���
int main()
{
	int N;
	scanf_s("%d", &N);
	int j = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d", j, i, i * j);
			if (i*j<10) {
				printf("   ");
				
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}*/


#include<stdio.h>
/*int main()									ˮ�ɻ���������
{
	int n=3;
	scanf_s("%d", &n);
	int first = 1;
	for (int cnt = 1; cnt < n; cnt++) {			//ȷ��λ��
		first *= 10;
	}
	int i = first;
	while (i < first * 10) {					//ȷ����Χ
		int sum = 0;
		int t = i;
		while (t > 0) {							//����ÿλ��
			int d = t % 10;
			t /= 10;
			int j = 0;
			int p = 1;
			while (j<n) {						//�ݴμ���
				p*= d;							
				j++;
			}
			sum += p;							//ÿλ�������
		}
		if (sum == i) {
			printf("%d\n", i);
		}
		i++;
	}

	

	return 0;
}*/



/*int main()									ˮ�ɻ����İ�
{
	int n;
	scanf_s("%d", &n);
	int first = 1;
	for (int cnt = 1; cnt < n; cnt++) {
		first *= 10;
	}
	int i = first;
	while (i < first * 10) {
		int t = i;
		int sum = 0;
		while (t>0) {
			int d=t %10;
			t /= 10;
			int j = 0;
			int p = 1;
			while (j<n) {
				p *= d;
				j++;
			}
			sum += p;
		}
		if (sum == i) {
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}*/

/*#include<stdlib.h>					�鷳
#include<time.h>
int main()
{
	int mnum, n;
	srand(time(NULL));
	mnum = rand() % 100 + 1;
	int cnt = 0;
	scanf_s("%d", &n);
	int finished = 0;
	while (1) {
		cnt++;
		int ynum;
		scanf_s("%d", &ynum);
		if (ynum < 0) {
			printf("game over");
			 finished = 1;
		}
		if (ynum > mnum) {
			printf("too big\n");
		}
		else {
			if (ynum < mnum) {
				printf("too small\n");
				for (; cnt == n;) {
					break;
				}
			}
			else {
				if (cnt == 1) {
					printf("bingo!\n");
				}
				else {
					if (cnt <= 3) {
						printf("lucky you\n");
						break;
					}
					else {
						if (cnt > 3 && cnt <= n) {
							printf("good guess\n");
							break;
						}
						if(cnt==n){
							if(!finished){
								printf("game over\n");
								finished = 1;
								}
							}
						}
					}
				}
			}
		}
		
	}


	return 0;
}*/