#include <stdio.h>
struct student{
    char name[20];
    int no;
}s[50];
void display(int n){
    for(int i=0;i<n;i++){
        printf("Student %d\n",i+1);
        printf("name :- %s\n",s[i].name);
        printf("Roll no :- %d\n",s[i].no);
    }
}
void deletion(int *n){
    int index;
    repeat:
    printf("At which index you want to delete student info :- ");
    scanf("%d",&index);
    if(index<0||index>*n-1){
        printf("Please Enter valid index position\n");
        goto repeat;
    }
    for(int i=index;i<*n-1;i++){
        s[i]=s[i+1];
    }
    *n = *n-1;
}
void updation(int n){
    int index;
    repeat:
    printf("At which index you want to modify student info :- ");
    scanf("%d",&index);
    if(index<0||index>n-1){
        printf("Please Enter valid index position\n");
        goto repeat;
    }
    printf("Please Enter name :- ");
    scanf("%s",s[index].name);
    printf("Please Enter roll no :- ");
    scanf("%d",&s[index].no);
    }
void insertion(int *n){
    int index;
    repeat:
    printf("At which index you want to insert new student info :- ");
    scanf("%d",&index);
    if(index<0||index>*n-1){
        printf("Please Enter valid index position\n");
        goto repeat;
    }
    for(int i=*n-1;i>=index;i--){
        s[i+1] = s[i];
    }
    printf("Please Enter name :- ");
    scanf("%s",s[index].name);
    printf("Please Enter roll no :- ");
    scanf("%d",&s[index].no);
    *n = *n + 1;
    }
int main(){
    int n,choice;
    printf("please enter the number of students:- \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter info of student %d\n",i+1);
        printf("name :- ");
        scanf("%s",s[i].name);
        printf("Roll no :- ");
        scanf("%d",&s[i].no);
    }
    while(choice!=0){
    up:
    printf("Enter your choice :\n0)stop\n1)insertion\n2)deletion\n3)upadtion\n4)display\n");
    scanf("%d",&choice);
    if(choice<0||choice>4){
        printf("Please enter the valid choice\n");
        goto up;
    }
       switch(choice){
           case 1:
            insertion(&n);
            break;
           case 2:
            deletion(&n);
            break;
           case 3:
            updation(n);
            break;
           case 4:
            display(n);
        }
    }
    return 0;
}