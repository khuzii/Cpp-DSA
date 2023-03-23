#include <iostream>
using namespace std;

string keypadArr[]= {"","","abc","def","ghi","jkl","mnop","qrst","uvw","xyz"};

void keypad(string s, string ans)  {
    if(s.length() == 0)  {
        cout<<ans<<endl;
        return;
    }
    char ch= s[0];
    string code= keypadArr[ch-'0'];
    string ros= s.substr(1);
    for(int i=0; i<code.length(); i++)  {
        keypad(ros, ans+code[i]);
    }
}
int main()  {
    keypad("23", "");   // it prints all the possible combination with given keypad keys 
    return 0;
}   