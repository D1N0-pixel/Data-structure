# -*- coding:utf-8 -*-
#내장함수
if any([0,0,0]): #모두 False => False
    print("True")
if all([0,1,2]):
    print("True all")
if any([0,1,2]):
    print("True any")

#chr vs ord : 아스키코드 관련
#chr(숫자), ord(문자)
print(chr(67))
print(ord('a'))

#enumerate : 인덱스 출력
for i, name in enumerate(['EB','DC','WP','HD']):
    print(i, name)

#map : 반복 가능한 자료형 각 요소에 함수를 적용시켜 반환함
def t_times(x):
    return x*2
print(list(map(t_times, [1,2,3,4])))
#print(list(map(t_times(x), [1,2,3,4]))) # (x)
print(list(map(lambda a: a*2, [1,2,3,4]))) # !!!

#max vs min
d1=[1,2,3,4,5]
print(max(d1)) #최댓값
print(min(d1)) #최솟값

#divmod : 몫과 나머지를 튜플로 반환
print(divmod(8, 3))
#print(divmod(8/3)) #(x)

#round : 반올림
print(round(3.141592)) #default : 0 => 3
print(round(3.141592, 2)) # 3.14
print(round(3.141592, -2)) # 0.0
print(round(3141592, -2)) #3141600

#sorted
d2=[1,4,2,8,5,7]
print(sorted(d2))
print(sorted('qwer'))
print(d2)
print(d2.sort()) #None
print(d2)
#내장함수 sorted(반복가능한 자료형) 리스트 내장함수 sort()
#1. 반환값 2. 원자료의 변형

#외장함수 : 모듈
#time
import time
#from time import *
print(time.time()) #1970년 1월 1일 이후 경과시간을 초단위로 변환
print(time.localtime(time.time()))
print(time.ctime())
print(time.asctime(time.localtime(time.time())))
print(time.strftime('%x', time.localtime(time.time())))
print(time.strftime('%a', time.localtime(time.time())))

t1 = time.time()
for i in range(10,-1,-1):
    print(i,end=" ")
    #time.sleep(1) #sleep(초) 초단위 지연
t2=time.time()
print("\n실행시간:", t2-t1)

#calendar
import calendar
print(calendar.calendar(2020))
print(calendar.prmonth(2020,9)) #None

#random : 난수
import random
print(random.random())
print(random.randint(1,6))

r1=[]
for i in range(1,7):
    r1.append(random.randint(1,6))
    print("주사위를 던집니다!")
    #time.sleep(1)
print(r1)
r2=[1,2,3,4,5,6]
r3=[]
for i in range(1,7):
    r3.append(random.sample(r2,1))
print(r3)

r4=[1,2,3,4,5,6,7,8,9,0]
random.shuffle(r4)
print(r4)

r5=['apple', 'banana', 'kiwi', 'peach']
print(random.choices(r5, weights = [1,1,1,1], k=10))

r6=[]
for i in range(1,6): #5번
    #r6.append(random.randrange(1, 100, 2)) #1부터 99까지 2 간격 1,3,5,7,9, ... , 99
    #r6.append(random.randrange(2, 100, 2)) #2부터 99까지 2 간격 2,4,6,8,9, ... , 98
    r6.append(random.randrange(1, 100, 3)) #1부터 99까지 3 간격 1,4,7,10, ... , 97
print(r6)

#업다운 게임
num = random.randint(1,100)
while True:
    guess = input("Guess my number (Q to exit): ")
    if guess.lower() == 'q':
        break
    else:
        if int(guess) > num:
            print("Choose lower number")
        elif int(guess) < num:
            print("Choose higher number")
        elif int(guess) == num:
            print("Correct!")
            break
        else:
            print("???")
    
