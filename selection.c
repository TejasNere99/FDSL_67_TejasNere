#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int arr[n],temp;
    printf("Enter the Elements of array : \n");
    for(int i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);  
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
     return 0;
}