
def greet(name, greeting='안녕하세요', end='!'):  # 기본값 인자
    print(f'{greeting}, {name}{end}')
 
greet('홍길동')                          # 기본값 사용
greet('홍길동', '반갑습니다')             # 두 번째 인자 덮어씀
greet(greeting='Hello', name='John')     # 키워드 인자 (순서 무관)
greet('Jane', end='.')                   # 일부만 키워드 지정
