#include <iostream>
using namespace std;

void inc(int n)  {
    if(n<0)
      return;
    inc(n-1);
    cout<<n<<" ";
}

void dec(int n)   {
    if(n<0)
      return;
    cout<<n<<" ";
    dec(n-1);
}
int main()  {
    int n=50;
    cout<<"Nos in increasing order: "<<endl;
    inc(n);
    cout<<endl<<"Nos in decreasing order: "<<endl;
    dec(n);
    return 0;
}