#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n= 7;
    int a[]={1, 5, 3, 4, 3, 5, 6};
    int minidx= INT_MAX;
    const int N = 1e+2;
    int idx[N];
    for(int i=0; i<N; i++)  {
        idx[i]= -1;
    }
    for(int i=0; i<n; i++)  {
        if(idx[a[i]] != -1)
          minidx= min(minidx, idx[a[i]]);
        else
          idx[a[i]]= i;
    }
    if(minidx==INT_MAX)
      cout<<"-1";
    else
      cout<<minidx+1;

    return 0;
}