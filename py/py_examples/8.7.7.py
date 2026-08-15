
# 재귀 함수로 계승 계산: factorial_rec.py
def fact(n):
    if n <= 1:           # 종료 조건 (base case)
        return 1
    return n * fact(n-1) # 재귀 호출
 
print(f'factorial of 7 = {fact(7)}')   # 5040
 
# 피보나치 수열 (재귀)
def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)
 
for i in range(10):
    print(fib(i), end=' ')   # 0 1 1 2 3 5 8 13 21 34
