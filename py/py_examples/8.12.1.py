
# Problem1.py
num1 = 10
num2 = 3
 
if num1 > num2:
    num1 = num2
    num1 += 10
    if num1 > 20:
        print(f'num1 = {num1}')
    else:
        print(f'num2 = {num2}')
