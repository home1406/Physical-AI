
# 은행 계좌 클래스: bank.py
class BankAccount:
    def __init__(self, owner, balance=0):
        self.owner   = owner
        self.balance = balance
        self.history = []
 
    def deposit(self, amount):
        self.balance += amount
        self.history.append(f'입금: +{amount}')
        print(f'입금 완료. 잔액: {self.balance}원')
 
    def withdraw(self, amount):
        if amount > self.balance:
            print('잔액 부족')
            return
        self.balance -= amount
        self.history.append(f'출금: -{amount}')
        print(f'출금 완료. 잔액: {self.balance}원')
 
    def show_history(self):
        print(f'[{self.owner}님 거래 내역]')
        for h in self.history:
            print(f'  {h}')
 
account = BankAccount('홍길동', 10000)
account.deposit(5000)
account.withdraw(3000)
account.show_history()
