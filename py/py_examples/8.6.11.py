
a = [1, 2, 3]
b = a
c = [1, 2, 3]
 
print(a is b)       # True  — 같은 객체 (같은 메모리)
print(a is c)       # False — 내용은 같으나 다른 객체
print(a == c)       # True  — 값(내용) 비교
 
print(2 in a)       # True
print(5 not in a)   # True
 
# None 비교는 == 대신 is 사용 (Python 권장)
x = None
if x is None:       # 권장
    print('None임')
