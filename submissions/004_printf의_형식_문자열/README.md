# 4. printf의 형식 문자열

**난이도:** ★

## 문제

정수 123, 실수 5.95, 문자 B를 각각 변수에 저장한 뒤, 형식에 맞춰 아래와 같이 출력하세요. (실수는 소수점 둘째 자리까지)

[입력] 없음
[출력]
정수: 123
실수: 5.95
문자: B

## 내 코드

```c
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
```

## 모범 답안

```c
#include <stdio.h>
int main(void)
{
    int i = 123;
    float f = 5.95f;
    char c = 'B';
    printf("정수: %d\n", i);
    printf("실수: %.2f\n", f);
    printf("문자: %c\n", c);
    return 0;
}
```

_해결일: 2026-09-29_