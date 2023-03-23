#include <iostream>
using namespace std;

int main()  {
    int arr[]={3, 5, 1, 7, 2, 0};
    int n= 6;
    for(int i=0; i<n; i++)  {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++)  {
        for(int j=i+1; j<n; j++)  {
            if(arr[j]<arr[i])  {
                int temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    for(int i=0; i<n; i++)  {
        cout<<arr[i]<<" ";
    }
    return 0;
}