#include <stdio.h>

int main(void)
{
    int   num  = 123;
    double real = 5.95;
    char  ch   = 'B';

    printf("정수: %d\n", num);
    printf("실수: %.2f\n", real);
    printf("문자: %c\n", ch);

    return 0;
}