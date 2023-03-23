#include <iostream>
using namespace std;

void print(int num)  {
    cout<<num<<endl;
    return;
}

void sum(int num1, int num2)  {
    print(num1);
    print(num2);
    int sum= num1+num2;
    print(sum);
}

int main()  {
    int num1=1, num2= 2;
    sum(1,2);
    return 0;
}