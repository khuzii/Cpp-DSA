#include<iostream>
using namespace std;
int main()  {
    int arr[] = {1, 2, 0, 7, 2};
    int n= 5;
    for(int i=0; i<n; i++)  {
        int sum=0, j;
        for(j=0; j<=i; j++)  {
            sum += arr[j];       
        }
        cout<<"sum from "<<i<<" to "<<j<<" : "<<sum<<endl;
    }
    return 0;
}