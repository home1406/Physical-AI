
# break 없이 끝나면 else 실행
for i in range(5):
    if i == 10:           # 절대 참이 아님
        break
else:
    print('루프 정상 종료')  # 출력됨
 
# break로 종료되면 else 실행 안 됨
for i in range(5):
    if i == 3:
        break
else:
    print('이건 출력 안 됨') # break로 종료되어 출력 안 됨
 
# 소수 판별에 활용
n = 17
for i in range(2, n):
    if n % i == 0:
        print(f'{n}은 소수가 아님')
        break
else:
    print(f'{n}은 소수')  # 17은 소수
