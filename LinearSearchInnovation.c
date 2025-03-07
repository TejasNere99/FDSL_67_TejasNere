#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d",&n);
    int arr[n],target,count=0,ans[n];
    printf("PLEASE ENTER THE %d ELEMENTS OF ARRAY :\n",n);
    for(int i=0;i<n;i++){
        printf("ELEMENT NO.%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ENTER YOUR TARGET : ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans[count]=i;
            count++; 
        }
    }
    if(count==0){
        printf("TARGET NOT FOUND");
    }else{
        printf("%d IS AT INDEX : ",target);
        for(int i=0;i<count;i++){
            printf("%d ",ans[i]);
        }
    }
    

    return 0;
}