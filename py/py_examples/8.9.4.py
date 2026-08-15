
# 리스트(가변 객체)를 이용한 값 교환: swap.py
def swap(lst, i, j):
    lst[i], lst[j] = lst[j], lst[i]
 
values = [10, 20, 30]
print(f'교환 전: {values}')   # [10, 20, 30]
swap(values, 0, 2)
print(f'교환 후: {values}')   # [30, 20, 10]
 
# C언어 포인터 전달에 대응하는 리스트 활용
def func(lst):
    lst[0] = 5
    lst[1] = 6
 
values = [1, 2, 3]
func(values)
print(values)   # [5, 6, 3]
