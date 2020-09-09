#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int max;
    int ptr; //단순 개수 세는 변수
    int front;
    int rear;
    int* que; // int *stk
}IntQueue;

int Initialize(IntQueue* q, int max); // Queue 초기화
int Enqueue(IntQueue* q, int x); // item 삽입
int Dequeue(IntQueue* q, int* x); // item 삭제 //int Pop(IntStack* s, int *x);
int Peek(const IntQueue* q, int* x); // 가장 최근에 삽입된 아이템 반환
void Clear(IntQueue* q); // Queue가 전체 삭제
int Capacity(const IntQueue* q); // Queue가 최대 용량
int Size(const IntQueue* q); // Queue가 데이터 개수
int IsEmpty(const IntQueue* q); // Queue가 비어있는지 확인
int IsFull(const IntQueue* q); // Queue가 가득 차있는지 확인
int Search(const IntQueue* q, int x); // Queue 내부 검색
void Print(const IntQueue* q); // Queue 출력
void Terminate(IntQueue* q); // Queue 종료

void main(){
    IntQueue que;

    if (Initialize(&que, 64) == -1) {
        printf("생성 실패");
        return 1;
    }
    while (1){
        int menu, x;

        printf("현재 데이터 수 : %d / %d \n", Size(&que), Capacity(&que));
        printf("(1)Enqueue (2)Dequeue (3)Peek (4)Print (5)Search (0)Terminate : ");
        scanf("%d", &menu);

        if (menu == 0)
            break;
        switch (menu) {
        case 1:
            printf("데이터 :");
            scanf("%d", &x);
            if (Enqueue(&que, x) == -1)
                printf("인큐 실패");
            printf("\n");
            break;
        case 2:
            if (Dequeue(&que, &x) == -1)
                printf("디큐 실패");
            else
                printf("Dequeue한 Data는 %d입니다\n\n",x);
            break;
        case 3:
            if (Peek(&que, &x) == -1)
                printf("Peek 실패\n");
            else
                printf("Peek한 Data는 %d입니다\n\n", x);
            break;
        case 4:
            Print(&que);
            break;
        case 5:
            printf("찾고자 하는 값을 입력하시오 :");
            scanf("%d", &x);
            Search(&que, x);
        }
    }
    Terminate(&que);
}

int Initialize(IntQueue* q, int max) {
    q->ptr = q->front = q->rear = 0;
    //s->ptr = 0;
    if ((q->que = calloc(max, sizeof(int))) == NULL) {
        q->max = 0;
        return -1;
    }
    q->max = max;
    return 0;
}

int Enqueue(IntQueue* q, int x){ //int Push(IntStack* s, int x)
    if (q->ptr >= q->max)
        return -1;
    else {
        q->ptr++;
        q->que[q->rear] = x;
        q->rear++;
        // s-> stk[s->ptr] = x;
        // s->ptr++;

        if (q->rear == q->max)
            q->rear = 0;
        return 0;
    }
}

int Dequeue(IntQueue* q, int* x) {
    if (q->ptr <= 0)
        return -1;
    else {
        q->ptr--;
        *x = q->que[q->front];
        q->front++;
        // s-> ptr--;
        // *x = s->stk[s->ptr];

        if (q->front == q->max)
            q->front = 0;

        return 0;
    }
}

int Peek(const IntQueue* q, int* x) {
    if (q->ptr <= 0)
        return -1;
    *x = q->que[q->front];
    // *x = s->stk[s->ptr-1];

    return 0;
}

void Clear(IntQueue* q) {
    q->ptr = q->front = q->rear = 0;
}

int Capacity(const IntQueue* q) {
    return q->max;
}

int Size(const IntQueue* q) {
    return q->ptr;
}

int IsEmpty(const IntQueue* q) {
    return q->ptr <= 0;
}

int IsFull(const IntQueue* q) {
    return q->ptr >= q->max;
}

int Search(const IntQueue* q, int x) {
    int i, idx;
    for  (i = 0; i <q->ptr; i++) {
        if (q->que[idx = (i + q->front) % q->max] == x) //q->que[q->front]==x
            return printf("%d번 인덱스에 존재함\n\n",idx);
    }
    return -1;
}

void Print(const IntQueue* q) {
    int i;
    for (i = 0; i< q->ptr; i++)
        printf("%d ", q->que[(i + q->front) % q->max]);
    printf("\n\n");
}

void Terminate(IntQueue* q) {
    if (q->que != NULL)
        free(q->que);
    q->max = q->ptr = q->front = q->rear = 0;
}
