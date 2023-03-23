#include <iostream>
using namespace std;

int main()  {
    int arr[]= {2, 5, 1, 3, 6, 2};
    int n= 6;
    for(int i=0; i<n; i++)  {
        for(int j=0; j<n-i-1; j++)  {
            if(arr[j]>arr[j+1])  {
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    for(int i=0; i<n; i++)  {
        cout<<arr[i]<<" ";
    }
    return 0;
}