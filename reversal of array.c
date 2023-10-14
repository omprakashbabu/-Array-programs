
// Write a C program to read n number of values in an array and display them in reverse order.

#include<stdio.h>
void main(){
    int arr[100],n;
    printf("Enter the number of elements to be stored : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe original array:");
    for(int i=0;i<n;i++){
        printf("\nArray[%d] is %d",i,arr[i]);
    }
    printf("\n");
    printf("\nThe reversed array:");
    for(int i=n-1;i>=0;i--){
        printf("\nArray[%d] is %d",i,arr[i]);
    }
    
}
