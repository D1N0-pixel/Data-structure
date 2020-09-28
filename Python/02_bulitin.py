import mod2

print("02_builtin.py", __name__) # "__name__" = "__main__"

print(mod2.PI) #3.14159
m=mod2.Math() #m객체는 mod2.Math 클래스의 인스턴스다
print(isinstance(m,mod2.Math)) #isinstance 내장함수=>True
print(m.solv(6)) #반지름이 6인 원의 넓이
print(m.solv2(12)) #반지름이 12인 원의 둘레

#내장함수
#all() : all(반복 가능 자료형: 리스트, 튜플) vs any(): any(반복가능 자료형)
#all(): 모두 True 이면 True | any(): 하나라도 True이면 True
print(all([1,2,3,4,5]))
print(all([0,1,2,3,4]))
print(any([1,2,3,4,5]))
print(any([0,1,2,3,4]))
print(any([0, False]))

#eval : eval(expression) 수식
print(eval("1" + "2"))
aabb = "Python"
print(eval("aa"+"bb")) #aabb
print(eval('"aa"+"bb"'))
print(eval('all([1,2,3])'))
