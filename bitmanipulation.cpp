#include <iostream>
using namespace std;

// to return 0 or 1 at given position
int getbit(int n, int i)  {
    if(n & (1<<i))  {
        return 1;
    }
    return 0;
}

// to set 1 at ith position
int setbit(int n, int i)  {
    n= n|(1<<i);
    return n;
}

// to set ith bit as 0
int clearbit(int n, int i)  {
    n= n&(~(1<<i));
    return n;
}

int ispowerof2(int n)  {
    return n && (!(n & n-1));
}

int noofones(int n)  {
    int ans= 0;
    while(n != 0)  {
        n= n & n-1;
        ++ans;
    }
    return ans;
}

int main()  {
    cout<<getbit(5,1)<<endl;    // 0101 i.e. 0 at i=1
    cout<<setbit(5, 1)<<endl;   // 0101 and 1 at i=1 i.e 0111. Thus, 7
    cout<<clearbit(7, 1)<<endl;   // 0111 and 0 at i=1 i.e 0101. Thus, 5
    cout<<ispowerof2(8)<<endl;
    cout<<noofones(19)<<endl;
    return 0;
}