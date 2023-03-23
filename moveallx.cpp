#include <iostream>
using namespace std;

string moveallx(string s)  {
    if(s.empty())  {
        return s;
    }
    char ch= s[0];
    string ans= moveallx(s.substr(1));
    if(ch=='x')  {
        return (ans+ch);
    }
    return (ch+ans);
}
int main()  {
    cout<<moveallx("axxbpxwekdfxxfgh")<<endl;
    return 0;
}