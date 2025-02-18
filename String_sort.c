#include<stdio.h>
#include<string.h>

int main(){
    char str[20],temp;
    printf("Enter a string : \n");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        for(int j=1;str[j]!='\0';j++){
            if(str[j-1]>str[j]){
                temp = str[j];
                str[j]=str[j-1];
                str[j-1]=temp;
            }
        }
        
    }
    printf("Sorted string : %s",str);
    return 0;
}