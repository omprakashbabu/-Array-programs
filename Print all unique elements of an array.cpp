//Print all unique elements of an array

#include<iostream>
using namespace std;
int main(){
    int arr1[100],ctr=0;;
    int n;
    int i, j,k;
        cout<<"Input the number of elements to be stored in the array :";
        cin>>n;
        cout<<"Input "<<n<<" elements in the array :\n";
        for(i=0;i<n;i++)
        {
            cout<<"element - "<<i<<" : ";
            cin>>arr1[i];
        }
        for (i = 0; i < n; i++) {
            ctr=0;
            for(j=0,k=n; j<k+1; j++)
            {                         
                if (i!=j)
                {
		            if(arr1[i]==arr1[j])
                    {
                        ctr++;   //Increment the counter when the seaarch value is duplicate.
                    }
                }
            }
            if(ctr==0)
            {
                cout<<"\nThe unique element is "<<arr1[i];
            }
        }
    
    return 0;
}

/*
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 2
element - 4 : 4

The unique element is 1
The unique element is 3
The unique element is 4  
*/
