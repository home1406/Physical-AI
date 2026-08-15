
# 리스트를 이용하여 1,2,...10을 저장하고 더하기: sum_list.py
array = list(range(1,11))   # [0,1, 2, ..., 10]
total = 0
 
for n in range(0,10):
    total += array[n]
 
print(f'1+2+...+10 = {total}')
 
# 더 간결한 방법
print(sum(range(1, 11)))  # 내장 sum() 활용
