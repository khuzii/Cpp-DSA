#include <iostream>
using namespace std;
int gcd(int, int);
int lcm(int, int);
int main()  {
    int a=8, b=10;
    //cin>>a>>b;
    cout<<"gcd: "<<gcd(a,b)<<endl;
    cout<<"lcm: "<<lcm(a,b)<<endl;
    return 0;
}

int gcd(int a, int b)  {
    if(b==0)  {
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a, int b)  {
    return a*b/gcd(a,b);
}