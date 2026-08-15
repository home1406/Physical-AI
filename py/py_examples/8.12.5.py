
# ASCII 코드 출력 프로그램: ascii.py
for n in range(32, 128):
    print(f'{n:3d} = {chr(n)}', end='\t')
