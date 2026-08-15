
# 여러 값 반환
def min_max(lst):
    return min(lst), max(lst)    # 튜플로 반환
 
lo, hi = min_max([3, 1, 4, 1, 5, 9])
print(f'min={lo}, max={hi}')    # min=1, max=9
 
# 조건에 따른 조기 반환
def absolute(x):
    if x < 0:
        return -x   # 조기 반환
    return x
 
print(absolute(-7))  # 7
print(absolute(3))   # 3
