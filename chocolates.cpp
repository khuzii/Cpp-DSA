#include <iostream>
using namespace std;

int main()  {
    int choco= 15;              //15
    int wrapper= 3;            //5
    choco += (choco-1)/(wrapper-1);
    cout<<choco;
    return 0;
}