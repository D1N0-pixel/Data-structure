# -*- coding:utf-8 -*-
#mod.py
#파이썬 파일을 만들다. 스크립트를 만들다. 모듈을 만들다

def add(a, b):
    return a+b

def sub(a, b):
    return a-b

PI = 3.14158
class Math:
    def solv(self, r):
        return PI*(r**2)

def mul(x, y):
    return x*y

if __name__ == "__main__":
    print(add(1, 6))
    print(add(1, 6))
