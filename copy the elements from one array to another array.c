
//Copy the elements of one array into another array

#include<stdio.h>
void main(){
    int arr1[100],arr2[100],n,sum=0;
    printf("Enter the number of elements to be stored : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nThe original array :");
    for(int i=0;i<n;i++){
        printf("\nArray[%d] is %d",i,arr1[i]);
    }
    
    for(int i=0;i<n;i++){
        arr2[i] = arr1[i];
    }
    
    printf("\n");
    printf("The copyed array :");
    for(int i=0;i<n;i++){
        printf("\nArray[%d] is %d",i,arr2[i]);
    }
    
    
}
