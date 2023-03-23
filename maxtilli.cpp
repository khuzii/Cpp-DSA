#include <iostream>
using namespace std;

int main()  {

    int a[]= {1, 0, 5, 4, 6, 8};
    int n= 6; 
    int mx= a[0];
    for(int i=1; i<n; i++)  {
        a[i]= max(mx, a[i]);
        mx= a[i];
    }
    cout<<"Max till i:\n";
    for(int i=0; i<n; i++)  {
        cout<<a[i]<<" ";
    }
    return 0;
}