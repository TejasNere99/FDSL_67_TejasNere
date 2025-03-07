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
    // insertion sort
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                for(int k=j;k>i;k--){
                    arr[k]=arr[k-1];
                }
                arr[i]=temp;
            }
        }
    }
    // sorted array
    printf("SORTED ARRAY IS :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}