
//C program to find the sum of all elements of an array.

#include<stdio.h>
void main(){
    int arr[50],n,sum=0; //initialization
    printf("Enter the number of elements to be stored : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){   //Getting the input of array
        scanf("%d",&arr[i]);
    }
    printf("\nThe array:");   //Printing the original array
    for(int i=0;i<n;i++){
        printf("\nArray[%d] is %d",i,arr[i]);
    }
    printf("\n");
    printf("The sum of all the elements:");   //for loop to find the sum of all elements
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
    
}
