#include <iostream>
using namespace std;

int main()  {
    int arr[]= {2, 5, 1, 3, 6, 1};
    int n= 6;
    for(int i=1; i<n; i++)  {
        int curr= arr[i], j=i-1;
        while(arr[j]>curr && j>=0)  {
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]= curr;
    }
    for(int i=0; i<n; i++)  {
        cout<<arr[i]<<" ";
    }
    return 0;
}