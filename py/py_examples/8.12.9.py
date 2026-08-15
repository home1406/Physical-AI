
# 거품 정렬: bubble_sort.py
def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-1-i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
 
data = [64, 34, 25, 12, 22, 11, 90]
print(f'정렬 전: {data}')
bubble_sort(data)
print(f'정렬 후: {data}')
