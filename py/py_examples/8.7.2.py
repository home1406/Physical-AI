
# 두 수를 더하고 빼는 프로그램: plus.py
def plus(a, b):
    return a + b
 
def minus(a, b):
    return a - b
 
a, b = 200, 100
c = plus(a, b)    # plus() 결과를 c에 저장
d = minus(a, b)
print(f'{a} + {b} = {c}')
print(f'{a} - {b} = {d}')
