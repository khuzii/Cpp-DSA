#include <iostream>
using namespace std;
int uniqueno(int a[], int n)  {
    int xorsum= 0;
    for(int i=0; i<n; i++)  
      xorsum= xorsum^a[i];
    return xorsum;
}

int main()  {
    int a[]= {1, 2, 3, 4, 2, 3, 1};
    int n= 7;
    cout<<uniqueno(a, n);
    return 0;
}