#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    int *a;
    int na;

    printf("요소 개수:");
    scanf("%d",&na);
    a = calloc(na,sizeof(int));
    
    if(a==NULL)
        printf("메모리 확보 실패\n");
    else{
        printf("%d개의 정수 입력:\n", na);
        for (i=0; i<na; i++){
            printf("a[%d]:",i);
            scanf("%d", &a[i]);
        }
        printf("요소의 값 출력\n");
        for (i=0; i<na; i++)
            printf("a[%d]=%d\n", i, a[i]);
        free(a);
    }
}
