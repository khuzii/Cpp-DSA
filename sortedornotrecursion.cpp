#include <iostream>
using namespace std;

bool sorted_or_not(int a[], int n)  {
    if(n==1)
      return true;
    bool restArray= sorted_or_not(a+1, n-1);
    return (a[0]<a[1]  && restArray);
}
int main()  {
    int a[]= {1, 2, 3, 4, 5, 6};
    int n=6;
    if(sorted_or_not(a, n))
      cout<<"Yes";
    else 
      cout<<"No";
    return 0;
}