#include <stdio.h>
#include <string.h>
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
    int no,index=-1;
    repeat:
    printf("Enter the roll number of student that you want delete :- ");
    scanf("%d",&no);
    for(int i=0;i<*n;i++){
        if(s[i].no==no){
            index = i;
            break;
        }
    }
    if(index==-1){
         printf("Please Enter valid index position\n");
         goto repeat;
    }
    for(int i=index;i<*n-1;i++){
        s[i]=s[i+1];
        s[i].no--;
    }
    *n = *n-1;
}
void updation(int n){
    int no,index=-1,choice;
    char name[20];
    skip:
    printf("What you want to update ?\nEnter 1 for name\nEnter 2 for roll number\n");
    scanf("%d",&choice);
    if(choice<1||choice>2){
        goto skip;
    }
    switch (choice)
    {
    case 1:
         repeat:
         printf("Enter the roll number of student that you want update :- ");
         scanf("%d",&no);
         for(int i=0;i<n;i++){
             if(s[i].no==no){
               index = i;
               break;
              }
         }
         if(index==-1){
         printf("Please Enter valid Roll number\n");
         goto repeat;
         }
         printf("Please Enter name :- ");
         scanf("%s",s[index].name);
        break;
    case 2:
         set:
         printf("Enter the name of student that you want update :- ");
         scanf("%s",name);
         for(int i=0;i<n;i++){
             if((strcmp(s[i].name,name))==0){
               index = i;
               break;
              }
         }
         if(index==-1){
         printf("Please Enter valid name\n");
         goto set;
         }
         printf("Please Enter roll no :- ");
         scanf("%d",&s[index].no);
        break;
    }
    }
void insertion(int *n){
    int no,index=-1;
    repeat:
    printf("For which roll number you want to insert new student info :- ");
    scanf("%d",&no);
    for(int i=0;i<*n;i++){
        if(s[i].no==no){
            index = i;
            break;
        }
    }
    if(index==-1){
         printf("Please Enter valid Roll number\n");
         goto repeat;
    }
    for(int i=*n-1;i>=index;i--){
        s[i+1] = s[i];
        s[i+1].no++;
    }
    printf("Please Enter name :- ");
    scanf("%s",s[index].name);
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
           case 4:
            display(n);
        }
    }
    return 0;
}