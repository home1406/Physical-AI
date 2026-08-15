
# 7의 계승 연산: factorial.py
def fact(num):
    ans = 1
    for loop_num in range(2, num + 1):
        ans = ans * loop_num
    return ans
 
ans = fact(7)
print(f'factorial of 7 = {ans}')
