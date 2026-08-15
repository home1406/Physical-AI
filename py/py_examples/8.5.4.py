
# match-case 예제: match_case.py
ch = 'y'
 
match ch:
    case 'y':
        print('Yes')
    case 'n':
        print('No')
    case '\r':
        print('Enter')
    case _:
        print('다른 문자입니다')
