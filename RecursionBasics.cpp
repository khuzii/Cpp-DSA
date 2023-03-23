#include <bits/stdc++.h>
using namespace std;

void printNamentimes(int n, int i=1)  {
    if(i > n)
      return;
    cout<<"Name"<<endl;
    printNamentimes(n, i+1);
}

void print1ton(int n, int i=1)  {
    if(i > n)
      return;
    cout<<i<<" ";
    print1ton(n, i+1);
}

void printnto1(int n)  {
    if(!n)
      return;
    cout<<n<<" ";
    printnto1(n-1);
}

int sumofn(int n)  {
    if(!n)
      return 0;
    int sum= n;
    return sum+sumofn(n-1);
}

int factorial(int n)  {
    if(!n)
      return 1;
    int fact= n;
    return fact*factorial(n-1);
}

void reversearray(int a[], int r, int l=0)  {
    if(l>r)
      return;
    int temp= a[l];
    a[l]= a[r-1];
    a[r-1]= temp;
    reversearray(a, r-1, l+1);
}

bool checkpalindrome(string str, int i=0)  {
    if(i > str.size()/2)
      return true;
    if(str[i] != str[str.size()-i-1])
      return false;
    checkpalindrome(str, i+1);

}

int nthFibonacci(int n)  {
     if(n <= 1)
      return n;
    return nthFibonacci(n-2)+nthFibonacci(n-1);
}

void printsubsequences(int i, vector<int> &ds, vector<int> v, int n)  {
    if(i >= n)  {
        for(auto it : ds)  
            cout<<it<<" ";
            cout<<endl;
            return;
    }
    ds.push_back(v[i]);
    printsubsequences(i+1, ds, v, n);
    ds.pop_back();
    printsubsequences(i+1, ds, v, n);
}

void printsubsequencesumk(int i, vector<int> &ds, vector<int> v, int n, int k, int sum=0)  {
  if (i >= n)  { 
    if(sum==k)  {
      for(auto it : ds)  
            cout<<it<<" ";
            cout<<endl;
            return;
    }
        return;
    }
    ds.push_back(v[i]);
    sum += v[i];
    printsubsequencesumk(i+1, ds, v, n, k, sum);
    ds.pop_back();
    sum -= v[i];
    printsubsequencesumk(i+1, ds, v, n, k, sum);
}

int main()  {
    // int n; 
    // cin>>n;
    // printNamentimes(n);
    // print1ton(n);
    // printnto1(n);
    // cout<<sumofn(n)<<endl;
    // cout<<factorial(n)<<endl;
    // int a[n];
    // for(int i=0; i<n; i++)  {
    //     cin>>a[i];
    // }
    // reversearray(a, n);
    // for(int i=0; i<n; i++)  {
    //     cout<<a[i]<<" ";
    // }

    // string str;
    // cin>>str;
    // cout<<checkpalindrome(str)<<endl;

    // cout<<nthFibonacci(n)<<" ";

    vector<int> v= {1, 2, 1};
    vector<int> ds;
    int n=3;
    // printsubsequences(0, ds, v, n);

    printsubsequencesumk(0, ds, v, n, 2);

    return 0;
}