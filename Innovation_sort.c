#include<stdio.h>
void display(int arr[],int n,int pass){
      // sorted array
    printf("PASS %d ARRAY IS : ",pass);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// void bubbleSort(int arr[],int n){
//     int temp=0,count=0; 
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 count++;
//             }
//         }
//         display(arr,n,i);
//         if(count==0){
//             break;
//         }else{
//             count=0;
//         }
//     }
        
        
// }
// void selectionSort(int arr[],int n){
//      int temp;
//      for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         display(arr,n,i);
//     }

// }
// void insertionSort(int arr[],int n){
//     int temp;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[j];
//                 for(int k=j;k>i;k--){
//                     arr[k]=arr[k-1];
//                 }
//                 arr[i]=temp;
//             }
//         }
//         display(arr,n,i);
//     }
// }
int main(){
    int n,choice=1;
    printf("ENTER THE SIZE OF ARRAY :\n");
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n];
    printf("PLEASE ENTER THE %d ELEMENTS OF ARRAY :\n",n);
    for(int i=0;i<n;i++){
        printf("ELEMENT NO.%d : ",i+1);
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
        arr2[i]=arr[i];
    }   
       
        int temp;
        while(choice!=0)
        {
            up :   
        printf("Enter Your Choice :\n0 : Stop\n1 : Bubble Sort\n2 : Selection Sort\n3 : Insertion Sort \n");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
             temp=0;
             int count=0; 
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i;j++){
                    if(arr[j]>arr[j+1]){
                        temp = arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        count++;
                    }
                }
                display(arr,n,i);
                if(count==0){
                    break;
                }else{
                    count=0;
                }
            }
                 break;
            case 2 :
            temp=0;
            for(int i=0;i<n-1;i++){
               for(int j=i+1;j<n;j++){
                   if(arr1[i]>arr1[j]){
                       temp = arr1[i];
                       arr1[i]=arr1[j];
                       arr1[j]=temp;
                   }
               }
               display(arr1,n,i);
           }
                 break;
            case 3 :
             temp=0;
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    if(arr2[i]>arr2[j]){
                        temp=arr2[j];
                        for(int k=j;k>i;k--){
                            arr2[k]=arr2[k-1];
                        }
                        arr2[i]=temp;
                    }
                }
                display(arr2,n,i);
            }
                 break;        
        }
        if(choice<0||choice>3){
            printf("Please Enter Valid Choice\n");
            goto up; 
        }
    }   
                 
   
    

    // // sorted array
    // printf("SORTED ARRAY IS :\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    return 0;
}