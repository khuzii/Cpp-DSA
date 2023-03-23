#include <iostream>
using namespace std;

int main()  {
    int n= 8;
    int a[n+1]={1, 2, 0, 7, 2, 0, 2, 2, -1};
    if(n==1)  {
        cout<<"No of record breaking days: "<<"1";
        return 0;
    }
    int ans= 0, mx= -1;
    for(int i=0; i<n; i++)  {
        if(a[i]>mx && a[i]>a[i+1])  {
            ans++;
        }
        mx= max(mx, a[i]);
    }
    cout<<"No of record breaking days: "<<ans<<endl;
    return 0;
}