#include <bits/stdc++.h>
using namespace std;

int main()  {          
    char a[]= "My name is Upadhyay Khushi";
    int ans=INT_MIN, curr=0; 
    for(int i=0; a[i]!='\0'; i++)  {
        
        if(a[i] == ' ')  {
            curr= 0;
        }
        else  {
            ++curr;
        }
        ans= max(curr, ans);
    }
    cout<<ans;
    return 0;
}