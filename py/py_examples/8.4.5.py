# 무한 루프에서 조건 충족 시 탈출: break_loop.py
d = 0
total = 0
while True:
    d = d + 1
    total = total + d
    print(f'd={d}, sum={total}') # 합계를 계산한 후 출력
    if total > 11:  # 합계(total)가 11을 초과하는지 체크
        print(f"--- 합계가 11을 초과하여 종료합니다 (최종 d={d}) ---")
        break