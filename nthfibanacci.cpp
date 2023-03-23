#include <iostream>
using namespace std;
int fib(int n)  {
    if(n==0 || n==1)
      return n;
    if(n & 1)  {
        int f1= fib((n+1)/2);
        int f2= fib((n+1)/2 -1);
        return f2*f1+f2*f2;
    }
    else  {
        int f1= fib(n/2);
        int f2= fib(n/2 -1);
        return f1*f1+2*f1*f2;
    }
}
// 0 1 2 3 4 5 6  7  8  9 10
// 0 1 1 2 3 5 8 13 21 34 55
int main()  {
    int n=3;
    cout<<n<<"th fibonacci: "<<fib(n);
    return 0;
}