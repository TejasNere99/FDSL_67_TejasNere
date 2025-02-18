#include<stdio.h>

int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY :\n");
    scanf("%d",&n);
    int arr[n];
    printf("PLEASE ENTER THE %d ELEMENTS OF ARRAY :\n",n);
    for(int i=0;i<n;i++){
        printf("ELEMENT NO.%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    // bubble sort
    int temp=0,count=0; 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
        if(count==0){
            break;
        }else{
            count=0;
        }
    }
    // sorted array
    printf("SORTED ARRAY IS :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}