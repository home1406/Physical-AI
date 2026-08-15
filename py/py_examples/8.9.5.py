
# 포인터 변수와 배열에 대응: ptr_array.py
array = [1, 2, 3, 4, 5]
 
# 방법 1: 인덱스 사용 (C 포인터와 유사)
for count in range(len(array)):
    print(f'array[{count}] = {array[count]}')
 
# 방법 2: enumerate (Python 권장)
for idx, val in enumerate(array):
    print(f'array[{idx}] = {val}')
