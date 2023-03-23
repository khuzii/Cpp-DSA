#include <iostream>
using namespace std;
/*      |______________________|
        |__remDup(    ""    )__|    <- 1
        |__remDup(   "d"    )__|    <- 2       ch=d
        |__remDup(   "dd"   )__|    <-
        |__remDup(   "cdd"  )__|    <-
        |__remDup(  "ccdd"  )__|    <-
        |__remDup(  "bccdd" )__|    <-
        |__remDup( "bbccdd" )__|    <-
        |__remDup("abbccdd" )__|    <-
        |__remDup("aabbccdd")__|    <-
        |____main()____________|    <-
*/
string removeDuplicates(string s)  {
    if(s.empty())  {
        return s;
    }
    char ch= s[0];
    string ans= removeDuplicates(s.substr(1));
    if(ch==ans[0])  {
        return ans;
    }
    return (ch+ans);
}
int main()  {
    cout<<removeDuplicates("aabbcceedd")<<endl;
    return 0;
}