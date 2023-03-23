#include <iostream>
using namespace std;

void gcd(int a, int b)  {
    while(b!=0)  {
        int rem= a%b;
        a=b;
        b=rem;
    }
    cout<<a;
    
}
int main()  {
    gcd(42, 24);
    return 0;
}