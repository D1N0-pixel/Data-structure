#define STACK_SIZE 5 //스택 사이즈를 5로 정의
typedef int element; //element의 type을 int로 정의한다
element stack[STACK_SIZE]; //stack을 5만큼 만든다
int top = -1; //top은 -1로 초기화

void push(element item){
    if(top >= STACK_SIZE-1){
        printf("Stack is full\n");
    } 
    else{
        stack[++top] = item;
    }
}

element pop(){
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else {
        return stack[top--];
    }
}

element peek(){
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        return stack[top];
    }
}


