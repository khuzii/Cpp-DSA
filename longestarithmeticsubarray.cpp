#include <iostream>
using namespace std;

int main()  {

    int n= 7;
    int a[]= {10, 7, 4, 6, 8, 10, 13};

    int ans= 2, curr=2, pd= a[0]-a[1];
    for(int i=2; i<n; i++)  {    
        if(pd == a[i-1]-a[i])  {
            ++curr;
        }
        else  {
            pd= a[i-1]-a[i];
            curr= 2;
        }
        ans= max(ans, curr);
    }
    cout<<ans;
    return 0;
} 