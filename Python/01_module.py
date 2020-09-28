# -*- coding:utf-8 -*-
#클래스 변수
class h:
    lastname="Jang"

a=h()
b=h()
print(id(a.lastname))
print(id(b.lastname))
h.lastname = "Seohyun"
print(id(a.lastname))
print(id(b.lastname))
h.lastname = "Jang"
print(id(a.lastname))
print(id(b.lastname))

#클래스 변수는 모든 객체에 공유된다
#a 객체와 b 객체에 공유

#모듈의 불러오기 : 모듈 - 함수, 클래스, 변수등을 모아놓은 파일
#모듈, 스크립트, 파일 = 파이썬으로 작성된 모든 파일은 모듈

#1. import 모듈명
import mod
print(mod.add(1, 2)) # 1, 2 인수
print(mod.sub(10, 5))

print(mod.PI) #3.14159
m = mod.Math() #m객체는 mod.Math클래스의 인스턴스다

#2. from 모듈명 import *
from mod import *
print(add(1, 3))
print(sub(9, 6))

#__name__ vs __main__
print(__name__)
