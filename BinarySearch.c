#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d",&n);
    int arr[n],target,count=0;
    printf("PLEASE ENTER THE %d ELEMENTS OF ARRAY :\n",n);
    for(int i=0;i<n;i++){
        printf("ELEMENT NO.%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ENTER YOUR TARGET : ");
    scanf("%d",&target);
    int start=0,end=n-1,mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==target){
            printf("It is at index : %d",mid);
            count++;
            break;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end = mid-1;
        }
    }
    if(count==0){
        printf("Not found");
    }

    return 0;
}