/*数学领域著名的“哥德巴赫猜想”的大致意思是：任何一个大于2的偶数总能表示为两个素数之和。比如：24 = 5 + 19，其中5和19都是素数。本实验的任务是设计一个程序，验证20亿以内的偶数都可以分解成两个素数之和。

输入格式：
输入在一行中给出一个(2, 2 000 000 000]范围内的偶数N。

输出格式：
在一行中按照格式“N = p + q”输出N的素数分解，其中p ≤ q均为素数。又因为这样的分解不唯一（例如24还可以分解为7 + 17），要求必须输出所有解中p最小的解。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
int is_prime(int k)
{
    for (int j = 2; j <= sqrt(k);j++) {
        int prime = 1;
        if (k % j == 0) {
            prime = 0;
            return 0;
            break;
        }  
    }
    return 1;
}
int main()
{
    int n;                                         //定义一个偶数n
    scanf("%d", &n);                               //输入n
    int p, q;                                               //定义两个数p，q
    for (p = 2; p <= n / 2; p++)
    {
        int prime = is_prime(p);                                                //for循环,p从2开始，到小于等于n/2.若大于则重复
        if (prime == 0) {
            continue;                                             //定义一个判断素数函数，输入p                                              //在函数内定义一个prime=1                                                  //在函数里运用for语句，定义j=2一直到小于等于p的平方根，然后每次都与p取余。
        }
        else {                                           //用函数中运用if语句判断如果余数在某一次为0，则prime=0并直接返回到主函数
            q = n - p;                                           //在主函数for循环内运用if语句判断prime是否为真，若真则进一步求q;若假则continue
            int primeq=is_prime(q);
            if (primeq == 1) {
                break;
            }                                           //在主函数for循环内继续求q,q=n-p。
           }                                           //再将p输入函数中判断
        }                                            //若q为素数返回后直接跳出for循环
    printf("%d = %d + %d\n", n, p, q);                  //输出
      

    return 0;
}