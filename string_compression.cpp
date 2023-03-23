#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<char> chars= {'a','a','b','b','c','c','c'};
        string s="";
        int cnt=1, i=0;
        while(i<chars.size())  {
            if(chars[i]==chars[i+1])
                ++cnt;
            else if(cnt >= 1)  {
                s.push_back(chars[i]);
                s+=to_string(cnt);
                cnt=0;
            }
            // else if(cnt==1)  {
            //     s.push_back(chars[i]);
            //     s.push_back(chars[i]);
            // }
            else  {
                s.push_back(chars[i]);
                cnt=0;
            }
            ++i;
        }
        cout<<s<<endl;
        return 0;
    
}