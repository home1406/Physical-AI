
# 최솟값과 최댓값 탐색: min_max.py
def find_min_max(lst):
    if not lst:
        return None, None
    min_val = lst[0]
    max_val = lst[0]
    for val in lst[1:]:
        if val < min_val: min_val = val
        if val > max_val: max_val = val
    return min_val, max_val
 
data = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3]
lo, hi = find_min_max(data)
print(f'최솟값 = {lo}, 최댓값 = {hi}')
