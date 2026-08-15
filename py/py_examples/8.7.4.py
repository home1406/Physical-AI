
# *args: 임의 개수 위치 인자 (튜플)
def sum_all(*args):
    print(f'인자들: {args}')   # 튜플로 수신
    return sum(args)
 
print(sum_all(1, 2))           # 3
print(sum_all(1, 2, 3, 4, 5)) # 15
 
# **kwargs: 임의 키워드 인자 (딕셔너리)
def show_info(**kwargs):
    for key, val in kwargs.items():
        print(f'{key}: {val}')
 
show_info(name='홍길동', age=25, city='서울')
 
# *args와 **kwargs 혼합
def mixed(a, b, *args, **kwargs):
    print(a, b, args, kwargs)
 
mixed(1, 2, 3, 4, x=5, y=6)   # 1 2 (3,4) {'x':5,'y':6}
