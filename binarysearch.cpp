#include <iostream>
using namespace std;

int main()  {// 0  1   2   3   4   5   6        l  r  mid
    int arr[]= {8, 10, 12, 21, 27, 34, 42};  // 4  5   4
    int key= 27;
    int l=0, r=6, mid;
    while(l<=r)  {
        mid= (l+r)/2;
        if(arr[mid]==key)  {
            cout<<"key found at "<<mid<<endl;
            break;
        }
        else if(arr[mid]<key)  {
            l=mid+1;
        }
        else  {
            r= mid-1;
        }
    }
    return 0;
}