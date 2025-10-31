//程序的功能是以每行5个数来输出300以内能被7或17整除的偶数，并求出其和。

//输出格式 :
//每行输出5个满足条件的偶数。每个数占6列列宽。
//满足条件的偶数和按“sum = 偶数和”的顺序单独在一行输出，偶数和原样输出，没有任何格式控制。

#include<stdio.h>
int main()
{
	int n;
	int sum = 0;
	int cnt = 0;
	for (n = 2; n < 300; n += 2) {
		if (n % 7 == 0 || n % 17 == 0) {
			sum += n;
			cnt++;
			printf("%6d", n);
			if (cnt % 5 == 0)
				printf("\n");

		}
		
	}
	if (cnt % 5 < 5) {
		printf("\n");
		printf("sum = %d", sum);
	}
	return 0;
}