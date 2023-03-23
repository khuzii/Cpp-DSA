#include <iostream>
using namespace std;

int main()  {
    int n=1;
    int div5=0, div7=0, div5_7=0;
    while(n<=100)  {
        if(n%5 == 0)
          ++div5;
        else if(n%7 == 0)
          ++div7;
        else if(n%5==0 && n%7==0)
          ++div5_7;
        ++n;
    }
    cout<<div5+div7-div5_7<<endl;
    return 0;
}