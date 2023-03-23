#include <bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n)  {
    int m= flowerbed.size();
    if(flowerbed[0]==0 && flowerbed[1]==0)  {
        n--;
    }
    if(n==0)  {
        return true;
    }
    if(flowerbed[m-2]==0 && flowerbed[m-1]==0)  {
        n--;
    }
    if(n==0)  {
        return true;
    }
    for(int i=1; i<m-1; i++)  {
        if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)  {
            n--;
        }
        if(n==0)  {
            return true;
        }
    }
    return false;
}
int main()  {
    vector<int> flowerbed= {1, 0, 0, 0, 1};
    int n=1;
    cout<<canPlaceFlowers(flowerbed, n);
    return 0;
}