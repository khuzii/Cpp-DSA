/*     n=4
   *             *     0     0 7
   * *         * *     1     1 6
   * * *     * * *     2     2 5
   * * * * * * * *     3     3 4
   * * * * * * * *     0     3 4
   * * *     * * *     1     2 5
   * *         * *     2     1 6
   *             *     3     0 7
*/

#include <iostream>
using namespace std;

int main()  {
    int n=6;
    //cin>>n;
    for(int i=0; i<n; i++)  {
        for(int j=0; j<2*n; j++)  {
            if(j <= i)  {
                cout<<"* ";
            }
            else if(j>=2*n-i-1)  {
                cout<<"* ";
            }
            else  {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)  {
        for(int j=0; j<2*n; j++)  {
            if(j<n-i) 
              cout<<"* ";
            else if(j>=n+i) 
              cout<<"* ";
            else  
              cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}