
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

                  for(int k =n-i+1 ; k>=1 ; k--)
                  {
                      cout<<"*";
                  }

                cout<<endl;
            }

            cout<<endl;
        }
}



