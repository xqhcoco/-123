#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int c;
    int i;
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    for (i = 0; i < 10; i++) {
        c = getchar();
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letter++;
        }
        else {
            if (c == ' ' || c == '\n') {
                blank++;
            }
            else {
                if (c >= '0' && c <= '9') {
                    digit++;
                }
                else {
                    other++;
                }
            }
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);



    return 0;
}