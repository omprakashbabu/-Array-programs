
//Display the duplicate elements in an array

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    int i, j;
        cout<<"Input the number of elements to be stored in the array :";
        cin>>n;
        cout<<"Input "<<n<<" elements in the array :\n";
        for(i=0;i<n;i++)
        {
            cout<<"element - "<<i+1<<" : ";
            cin>>arr[i];
        }
        for (i = 0; i < n; i++) {
            if (arr[i] == arr[i+1]) {
                cout<<"\nThe duplicate element is : "<<arr[i];
            
            }
        }
    
    return 0;
}

/*  Output

Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 13
element - 3 : 4
element - 4 : 4

The duplicate element is : 1
The duplicate element is : 4    

*/
