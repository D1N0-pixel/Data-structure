#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int max;
    int ptr;
    int* stk;
} IntStack;

int Initialize(IntStack* s, int max); // Stack 초기화
int Push(IntStack* s, int x); // item 삽입
int Pop(IntStack* s, int* x); // item 삭제
int Peek(const IntStack* s, int* x); // 가장 최근에 삽입된 아이템 반환
void Clear(const IntStack* s); // Stack의 전체 삭제
int Capacity(const IntStack* s); // Stack의 최대 용량
int Size(const IntStack* s); // Stack의 데이터 개수
int IsEmpty(const IntStack* s); // Stack이 비어있는지 확인
int IsFull(const IntStack* s); // Stack이 가득 차있는지 확인
int Search(const IntStack* s, int x); //Stack 내부 검색
void Print(const IntStack* s); // Stack 출력
void Terminate(IntStack* s); // Stack 종료

int Initialize(IntStack* s, int max){
    s->ptr = 0;
    if((s->stk = calloc(max, sizeof(int))) == NULL){
        s->max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}

int Push(IntStack* s, int x){
    if (s->ptr >= s->max){ // if(top >= STACK_SIZE-1)
        return -1;
    }
    s->stk[s->ptr++] = x; //Stack[++top]=item

    return 0;
}

int Pop(IntStack* s, int* x){
    if(s->ptr <= 0){
        return -1;
    }
    *x = s->stk[s->ptr--];

    return 0;
}
