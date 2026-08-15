
# 클래스 멤버에 접근: class_mem.py
class Easy:
    def __init__(self):
        self.num = 0
        self.ch  = ''
 
ez = Easy()
ez.num = 123
ez.ch  = 'A'
print(f'ez.num = {ez.num}, ez.ch = {ez.ch}')
 
pt = ez            # pt는 ez와 같은 객체 참조 (C의 포인터 대응)
pt.num = 456
pt.ch  = 'B'
print(f'pt.num = {pt.num}, pt.ch = {pt.ch}')
