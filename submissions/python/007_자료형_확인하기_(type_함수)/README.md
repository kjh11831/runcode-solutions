# 7. 자료형 확인하기 (type 함수)

**난이도:** ★

## 문제

정수 a와 실수 b를 입력받아, 각 값과 계산 결과의 자료형 이름을 type() 함수로 확인해 아래와 같이 출력하세요. 자료형 이름은 type(값).__name__ 으로 얻을 수 있습니다.

[입력] 첫째 줄: 정수 a / 둘째 줄: 실수 b
[출력]
a = (a) (int)
b = (b) (float)
a + b = (a+b) ((a+b의 자료형))
a * 2 = (a*2) ((a*2의 자료형))

## 내 코드

```c
a = int(input())
b = float(input())
print(f"a = {a} ({type(a).__name__})")
print(f"b = {b} ({type(b).__name__})")
print(f"a + b = {a + b} ({type(a + b).__name__})")
print(f"a * 2 = {a * 2} ({type(a * 2).__name__})")
```

## 모범 답안

```python
a = int(input())
b = float(input())
print(f"a = {a} ({type(a).__name__})")
print(f"b = {b} ({type(b).__name__})")
print(f"a + b = {a + b} ({type(a + b).__name__})")
print(f"a * 2 = {a * 2} ({type(a * 2).__name__})")
```

_해결일: 2026-11-21_