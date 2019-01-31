
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(;;)
        {
            int n;
            cout<< "Please enter the number: \n";
            cin>> n;
            for(int i=1; i<=n ; i++)
            {

                  for(int k =1 ; k<=n-i ; k++)
                  {
                      cout<<" ";
                  }
                  for(int j = i ; j>=1 ; j--)
                  {
                    cout<< "*";
                  }
                  for(int j = 1 ; j<=i-1 ; j++)
                  {
                    cout<< "*";
                  }

                cout<<endl;
            }

            cout<<endl;
        }
}


