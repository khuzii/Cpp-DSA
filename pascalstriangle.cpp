#include <iostream>
using namespace std;

int factorial(int num)  {
    if(num==0)  {
        return 1;
    }
    for(int i=num-1; i>0 ; --i)  {
        num *= i;
    }
    return num;
}

int binomial(int n, int r)  {
    int ans= factorial(n);
    ans /= factorial(n-r);
    ans /= factorial(r);
    return ans;
}

int main()  {
    int row;
    cin>>row;
    for(int i=0; i<row; i++)  {
        for(int j=0; j<=i; j++)  {
            cout<<binomial(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}