#include <stdio.h>

struct student{
    int number;
    char name[20];
    double grade;
};

void main(){
    int i;
    struct student list[3];
    for (i=0; i<3; i++){
        scanf("%d", &list[i].number);
        scanf("%s", list[i].name);
        scanf("%lf", &list[i].grade);
    }

    for (i=0; i<3; i++)
        printf("%s, %lf\n", list[i].name, list[i].grade);
}
