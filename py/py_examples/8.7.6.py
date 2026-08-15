
# 일반 함수 vs 람다
def square(x):      # 일반 함수
    return x ** 2
 
square2 = lambda x: x ** 2   # 동일한 람다
 
print(square(5))   # 25
print(square2(5))  # 25
 
# 정렬 key에 활용
students = [('홍길동', 85), ('이순신', 92), ('강감찬', 78)]
students.sort(key=lambda s: s[1])      # 성적 오름차순
students.sort(key=lambda s: s[1], reverse=True)  # 내림차순
 
# map, filter에 활용
nums = [1, 2, 3, 4, 5]
squared = list(map(lambda x: x**2, nums))
evens   = list(filter(lambda x: x%2==0, nums))
print(squared)   # [1, 4, 9, 16, 25]
print(evens)     # [2, 4]
