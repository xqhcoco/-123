#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
long long sum(int a)
{
	int b;
	int ans;
	long long total = 1;
	for (b = 2; b <= sqrt(a); b++) {
		if (a % b == 0) {
			ans = a / b;
			total = total + b + ans;
		}
	}
	return total;
}
int main()
{
	int s = 0;
	int a, b;
	int tempa,tempb;
	scanf("%d", &s);
	for (int a = s;; a++) {
		tempb = sum(a);
		tempa = sum(tempb);
		if (a!=tempb&&a==tempa) {
			printf("%lld %lld",a,tempb);
			break;
		}
	}

	return 0;
}